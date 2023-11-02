
@interface SXJSONSubscribeAction : SXJSONAction <SXSubscribeAction>

@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXAction> *postPurchaseAction;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

@end
