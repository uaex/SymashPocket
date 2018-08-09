
Pod::Spec.new do |s|
  s.name             = 'SymashPocket'
  s.version          = '0.2.0'
  s.summary          = 'SymashPocket for Magic Programming'

  s.description      = <<-DESC
  it's a public podspec as placeholder of SymashSupport.framework
                       DESC

  s.homepage         = 'https://github.com/uaex/SymashPocket'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'uaex' => 'goosoul@icloud.com' }
  s.source           = { :git => 'https://github.com/uaex/SymashPocket.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'

  s.source_files = 'Headers/*'
  
  s.public_header_files = 'Headers/SymashPocket.h'
end
