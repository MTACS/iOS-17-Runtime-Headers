
@interface PHASEShapeElement : NSObject {
    PHASEMaterial * _material;
    PHASEShape * _owner;
}

@property (nonatomic, retain) PHASEMaterial *material;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithOwner:(id)arg1;
- (id)initWithOwner:(id)arg1 material:(id)arg2;
- (id)material;
- (void)setMaterial:(id)arg1;

@end
