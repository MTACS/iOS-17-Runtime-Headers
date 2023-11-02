
@interface BRCDeviceConfiguration : NSObject {
    NSDictionary * _configuration;
}

@property (nonatomic, readonly) NSDictionary *configuration;

- (void).cxx_destruct;
- (id)configuration;
- (id)getDeviceConfigurationString;
- (id)init;

@end
