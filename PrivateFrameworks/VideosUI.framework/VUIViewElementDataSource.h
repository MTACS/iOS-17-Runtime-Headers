
@interface VUIViewElementDataSource : NSObject {
    NSDictionary * _dataDictionary;
    VUIRouterDataSource * _routerDataSource;
    IKViewElement * _viewElement;
}

@property (nonatomic, copy) NSDictionary *dataDictionary;
@property (nonatomic, retain) VUIRouterDataSource *routerDataSource;
@property (nonatomic) IKViewElement *viewElement;

- (void).cxx_destruct;
- (id)dataDictionary;
- (id)initWithDataDictionary:(id)arg1 viewElement:(id)arg2;
- (id)routerDataSource;
- (void)setDataDictionary:(id)arg1;
- (void)setRouterDataSource:(id)arg1;
- (void)setViewElement:(id)arg1;
- (id)viewElement;

@end
