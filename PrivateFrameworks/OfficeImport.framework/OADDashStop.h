
@interface OADDashStop : NSObject <NSCopying> {
    float  mDash;
    float  mSpace;
}

+ (void)addStopWithDash:(float)arg1 space:(float)arg2 toArray:(id)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)dash;
- (unsigned long long)hash;
- (id)initWithDash:(float)arg1 space:(float)arg2;
- (bool)isEqual:(id)arg1;
- (float)space;

@end
