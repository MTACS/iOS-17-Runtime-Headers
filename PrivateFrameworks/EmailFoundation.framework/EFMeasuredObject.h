
@interface EFMeasuredObject : NSObject {
    double  _measure;
    id  _object;
}

@property (nonatomic) double measure;
@property (nonatomic, retain) id object;

+ (id)max:(id)arg1;
+ (id)object:(id)arg1 withMeasure:(double)arg2;
+ (id)reverseSortedObjects:(id)arg1 limit:(unsigned long long)arg2;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (id)initWithObject:(id)arg1 measure:(double)arg2;
- (double)measure;
- (id)object;
- (void)setMeasure:(double)arg1;
- (void)setObject:(id)arg1;

@end
