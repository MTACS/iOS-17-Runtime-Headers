
@interface SAMorphunDataState : SAAceClientState

@property (nonatomic, copy) NSDictionary *assetVersionPerLocale;

+ (id)deliveryDeadline;
+ (id)morphunDataState;
+ (id)morphunDataStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)persistencePolicy;

- (id)assetVersionPerLocale;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAssetVersionPerLocale:(id)arg1;

@end
