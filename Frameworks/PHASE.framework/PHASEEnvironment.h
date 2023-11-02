
@interface PHASEEnvironment : PHASEObject {
    PHASEMedium * _medium;
    float  _mediumScaleFactor;
    NSArray * _shapes;
}

@property (nonatomic, retain) PHASEMedium *medium;
@property (nonatomic) float mediumScaleFactor;
@property (nonatomic, readonly, copy) NSArray *shapes;

+ (id)new;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithEngine:(id)arg1 shapes:(id)arg2;
- (id)medium;
- (float)mediumScaleFactor;
- (void)setMedium:(id)arg1;
- (void)setMediumScaleFactor:(float)arg1;
- (id)shapes;

@end
