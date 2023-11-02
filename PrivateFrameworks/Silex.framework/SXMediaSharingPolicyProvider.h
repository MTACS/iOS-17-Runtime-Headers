
@interface SXMediaSharingPolicyProvider : NSObject <SXMediaSharingPolicyProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long mediaSharingPolicy;
@property (readonly) Class superclass;

- (unsigned long long)mediaSharingPolicy;

@end
