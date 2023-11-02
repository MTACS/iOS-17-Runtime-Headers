
@interface CPSEntityResourceProvider : NSObject <CPEntityUpdateProviding> {
    <CPSEntityActionDelegate> * _actionDelegate;
    CPTemplate<CPEntityProviding> * _entityTemplate;
    <CPEntityClientTemplateDelegate> * _templateDelegate;
    CPSTemplateEnvironment * _templateEnvironment;
}

@property (nonatomic, readonly) <CPSEntityActionDelegate> *actionDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CPTemplate<CPEntityProviding> *entityTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <CPEntityClientTemplateDelegate> *templateDelegate;
@property (nonatomic, readonly) CPSTemplateEnvironment *templateEnvironment;

- (void).cxx_destruct;
- (id)actionDelegate;
- (id)description;
- (id)entityTemplate;
- (id)initWithTemplateEnvironment:(id)arg1 entityTemplate:(id)arg2 templateDelegate:(id)arg3 actionDelegate:(id)arg4;
- (void)setEntityTemplate:(id)arg1;
- (void)setTemplateDelegate:(id)arg1;
- (id)templateDelegate;
- (id)templateEnvironment;
- (void)updateEntityTemplate:(id)arg1 withProxyDelegate:(id)arg2;

@end
