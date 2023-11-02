
@interface _REMICloudIsOffCloudConfigurationStorage : NSObject <REMICloudIsOffCloudConfiguration> {
    double  _iCloudIsOffTimeIntervalSinceLastPrompt;
}

@property (nonatomic, readonly) double iCloudIsOffTimeIntervalSinceLastPrompt;

- (double)iCloudIsOffTimeIntervalSinceLastPrompt;
- (id)initWithTimeIntervalSinceLastPrompt:(double)arg1;

@end
