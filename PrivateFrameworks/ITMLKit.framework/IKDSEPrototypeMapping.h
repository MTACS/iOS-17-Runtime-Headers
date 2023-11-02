
@interface IKDSEPrototypeMapping : NSObject {
    IKAppPrototypeIdentifier * _identifier;
    NSIndexSet * _usageIndexes;
    IKViewElement * _viewElement;
}

@property (nonatomic, readonly) IKAppPrototypeIdentifier *identifier;
@property (nonatomic, readonly, copy) NSIndexSet *usageIndexes;
@property (nonatomic, readonly) IKViewElement *viewElement;

+ (id)prototypeMappingFromAppPrototype:(id)arg1 dataSourceElement:(id)arg2 elementFactory:(id)arg3;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 viewElement:(id)arg2 usageIndexes:(id)arg3;
- (id)usageIndexes;
- (id)viewElement;

@end
