
@interface PVTimedObject : NSObject <NSCopying, NSSecureCoding> {
    NSObject<NSSecureCoding><NSCopying> * _object;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (nonatomic, retain) NSObject<NSSecureCoding><NSCopying> *object;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

+ (id)findTimedObjectInSortedArray:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 returnFirstObjectForTimeBeforeFirst:(bool)arg3 returnLastObjectForTimeAfterLast:(bool)arg4;
+ (bool)supportsSecureCoding;
+ (id)timedObjectWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
+ (id)timedObjectWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 object:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 object:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)object;
- (void)setObject:(id)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
