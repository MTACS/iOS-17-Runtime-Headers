
@interface CRKSystemInfo : NSObject {
    NSString * _buildVersion;
    NSString * _systemVersion;
}

@property (nonatomic, readonly, copy) NSDate *bootDate;
@property (nonatomic, copy) NSString *buildVersion;
@property (nonatomic, readonly) bool cloudConfigEnablesEphemeralMultiUser;
@property (getter=isEphemeralMultiUser, nonatomic, readonly) bool ephemeralMultiUser;
@property (nonatomic, readonly) unsigned long long platform;
@property (nonatomic, copy) NSString *systemVersion;

+ (id)sharedSystemInfo;

- (void).cxx_destruct;
- (id)bootDate;
- (id)buildVersion;
- (bool)cloudConfigEnablesEphemeralMultiUser;
- (bool)isEphemeralMultiUser;
- (unsigned long long)platform;
- (void)populateVersions;
- (void)setBuildVersion:(id)arg1;
- (void)setSystemVersion:(id)arg1;
- (id)systemVersion;

@end
