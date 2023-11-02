
@interface NEVPNProtocolPlugin : NEVPNProtocol {
    NSString * _pluginType;
}

@property (readonly) NSString *pluginType;

- (void).cxx_destruct;
- (id)pluginType;

@end
