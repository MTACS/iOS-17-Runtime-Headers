
@interface TSDMaskInfo : TSDDrawableInfo <TSDMixing> {
    TSDPathSource * mPathSource;
}

@property (nonatomic, retain) TSDPathSource *pathSource;

- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 pathSource:(id)arg3;
- (bool)isEqual:(id)arg1;
- (Class)layoutClass;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)pathSource;
- (Class)repClass;
- (void)setGeometry:(id)arg1;
- (void)setPathSource:(id)arg1;

@end
