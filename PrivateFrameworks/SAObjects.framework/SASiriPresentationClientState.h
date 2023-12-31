
@interface SASiriPresentationClientState : SAAceClientState

@property (nonatomic) bool isFullScreen;

+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)siriPresentationClientState;
+ (id)siriPresentationClientStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)isFullScreen;
- (void)setIsFullScreen:(bool)arg1;

@end
