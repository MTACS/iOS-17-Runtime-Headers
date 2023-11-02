
@interface HKActivityMoveModeObject : NSObject <NSCopying, NSSecureCoding> {
    long long  _activityMoveMode;
}

@property (readonly) long long activityMoveMode;

+ (bool)supportsSecureCoding;

- (id)_initWithActivityMoveMode:(long long)arg1;
- (long long)activityMoveMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
