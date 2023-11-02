
@interface TSDSmartStroke : TSDStroke {
    double  mDeprecatedPatternOffsetDistance;
    NSString * mStrokeName;
}

@property (nonatomic, readonly) double deprecatedPatternOffsetDistance;
@property (nonatomic, readonly, copy) NSString *strokeName;

+ (Class)classForName:(id)arg1;
+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3;

- (bool)canApplyDirectlyToRepRenderable;
- (bool)canDrawWithOtherStroke:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)deprecatedPatternOffsetDistance;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;
- (bool)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)shouldAntialiasDefeat;
- (id)strokeName;

@end
