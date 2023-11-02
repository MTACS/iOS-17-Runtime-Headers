
@interface _TVShadowViewElement : NSObject {
    NSArray * _children;
    _TVShadowViewElementID * _elementID;
    _TVShadowViewElement * _parent;
    NSString * _resourceName;
}

@property (nonatomic, copy) NSArray *children;
@property (nonatomic, copy) _TVShadowViewElementID *elementID;
@property (nonatomic) _TVShadowViewElement *parent;
@property (nonatomic, copy) NSString *resourceName;

- (void).cxx_destruct;
- (id)children;
- (id)elementID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)parent;
- (id)resourceName;
- (void)setChildren:(id)arg1;
- (void)setElementID:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setResourceName:(id)arg1;

@end
