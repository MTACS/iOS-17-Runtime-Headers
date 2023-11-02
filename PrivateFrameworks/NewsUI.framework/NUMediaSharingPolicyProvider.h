
@interface NUMediaSharingPolicyProvider : NSObject <SXMediaSharingPolicyProvider> {
    <FCNewsAppConfigurationManager> * _appConfigurationManager;
    <FCHeadlineProviding> * _headline;
}

@property (nonatomic, readonly) <FCNewsAppConfigurationManager> *appConfigurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FCHeadlineProviding> *headline;
@property (nonatomic, readonly) unsigned long long mediaSharingPolicy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appConfigurationManager;
- (id)headline;
- (id)initWithHeadline:(id)arg1 appConfigurationManager:(id)arg2;
- (unsigned long long)mediaSharingPolicy;

@end
