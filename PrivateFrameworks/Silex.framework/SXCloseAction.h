
@interface SXCloseAction : NSObject <SXAction> {
    SXJSONDictionary * analytics;
}

@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)analytics;
- (id)type;

@end
