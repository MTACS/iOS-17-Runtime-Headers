
@interface _TVShadowViewElementID : NSObject <NSCopying> {
    NSString * _itemID;
    IKViewElement * _viewElement;
}

@property (nonatomic, readonly, copy) NSString *itemID;
@property (nonatomic, readonly) IKViewElement *viewElement;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithViewElement:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemID;
- (id)viewElement;

@end
