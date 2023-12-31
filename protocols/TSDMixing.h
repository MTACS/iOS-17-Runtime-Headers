
@protocol TSDMixing

@required

- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;

@optional

+ (bool)canMixWithNilObjects;
+ (NSArray *)mixableObjectClasses;

- (id)mixedBaseObjectWithObject:(id)arg1;

@end
