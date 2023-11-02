
@interface HMDPersistAuditAccessoryResultOperation : HMDAccessoryBackgroundOperation <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)predicate;

- (id)logIdentifier;
- (bool)mainWithError:(id*)arg1;

@end
