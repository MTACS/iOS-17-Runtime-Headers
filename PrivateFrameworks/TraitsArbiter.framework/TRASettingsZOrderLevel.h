
@interface TRASettingsZOrderLevel : NSObject <NSCopying, NSMutableCopying> {
    double  _zOrderLevel;
}

@property (nonatomic) double zOrderLevel;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithZOrderLevel:(double)arg1;
- (id)initWithZOrderLevelSettings:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToZOrderLevelSettings:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setZOrderLevel:(double)arg1;
- (double)zOrderLevel;

@end
