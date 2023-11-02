
@interface SXSubscribeAction : NSObject <SXSubscribeAction> {
    SXJSONDictionary * analytics;
    <SXAction> * postPurchaseAction;
}

@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXAction> *postPurchaseAction;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)analytics;
- (id)postPurchaseAction;
- (id)type;

@end
