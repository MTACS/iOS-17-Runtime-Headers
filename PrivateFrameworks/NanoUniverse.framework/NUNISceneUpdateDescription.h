
@interface NUNISceneUpdateDescription : NSObject {
    id /* block */  _updateBlock;
    unsigned long long  _vista;
}

@property (getter=isEarth, nonatomic, readonly) bool earth;
@property (getter=isLuna, nonatomic, readonly) bool luna;
@property (nonatomic, copy) id /* block */ updateBlock;
@property (nonatomic) unsigned long long vista;

+ (id)descriptionWithVista:(unsigned long long)arg1 updateBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)initWithVista:(unsigned long long)arg1 updateBlock:(id /* block */)arg2;
- (bool)isEarth;
- (bool)isLuna;
- (void)setUpdateBlock:(id /* block */)arg1;
- (void)setVista:(unsigned long long)arg1;
- (id /* block */)updateBlock;
- (unsigned long long)vista;

@end
