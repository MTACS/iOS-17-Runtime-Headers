
@interface SXBlockActionActivity : NSObject <SXActionActivity> {
    id /* block */  _genericBlock;
    UIImage * _image;
    id /* block */  _immediateBlock;
    NSString * _label;
    unsigned long long  _type;
    id /* block */  _userSelectedBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) id /* block */ genericBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly, copy) id /* block */ immediateBlock;
@property (nonatomic, readonly) NSString *label;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) id /* block */ userSelectedBlock;

- (void).cxx_destruct;
- (id /* block */)genericBlock;
- (id)image;
- (id /* block */)immediateBlock;
- (id)initWithLabel:(id)arg1 image:(id)arg2 type:(unsigned long long)arg3 block:(id /* block */)arg4;
- (id)initWithLabel:(id)arg1 type:(unsigned long long)arg2 block:(id /* block */)arg3;
- (id)initWithLabel:(id)arg1 type:(unsigned long long)arg2 immediateBlock:(id /* block */)arg3 userSelectedBlock:(id /* block */)arg4;
- (void)invokeWithAction:(id)arg1 invocationMethod:(unsigned long long)arg2;
- (id)label;
- (unsigned long long)type;
- (id /* block */)userSelectedBlock;

@end
