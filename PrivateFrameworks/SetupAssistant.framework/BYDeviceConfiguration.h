
@interface BYDeviceConfiguration : NSObject <BYDeviceConfiguration> {
    NSString * _buildVersion;
    NSString * _productVersion;
}

@property (nonatomic) NSString *buildVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inStoreDemoMode;
@property (nonatomic) NSString *productVersion;
@property (readonly) Class superclass;

+ (id)currentConfiguration;

- (id)buildVersion;
- (bool)inStoreDemoMode;
- (id)init;
- (id)productVersion;
- (void)setBuildVersion:(id)arg1;
- (void)setProductVersion:(id)arg1;

@end
