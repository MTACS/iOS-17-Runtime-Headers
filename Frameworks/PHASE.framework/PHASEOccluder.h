
@interface PHASEOccluder : PHASEObject {
    bool  _isStatic;
    float  _materialScaleFactor;
    NSArray * _shapes;
}

@property (nonatomic) bool isStatic;
@property (nonatomic) float materialScaleFactor;
@property (nonatomic, readonly, copy) NSArray *shapes;

+ (id)new;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithEngine:(id)arg1 shapes:(id)arg2;
- (bool)isStatic;
- (float)materialScaleFactor;
- (void)setIsStatic:(bool)arg1;
- (void)setMaterialScaleFactor:(float)arg1;
- (id)shapes;

@end
