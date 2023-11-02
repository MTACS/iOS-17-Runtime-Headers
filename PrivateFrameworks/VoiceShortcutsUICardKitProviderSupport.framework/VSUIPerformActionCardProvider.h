
@interface VSUIPerformActionCardProvider : NSObject <CRKIdentifiedProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (readonly) Class superclass;

- (id)cardViewControllerForCard:(id)arg1;
- (unsigned long long)displayPriorityForCard:(id)arg1;
- (id)providerIdentifier;

@end
