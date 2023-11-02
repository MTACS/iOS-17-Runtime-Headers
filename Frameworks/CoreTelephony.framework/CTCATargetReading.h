
@interface CTCATargetReading : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _targetId;
    NSNumber * _x;
    NSNumber * _y;
}

@property (nonatomic, retain) NSNumber *targetId;
@property (nonatomic, retain) NSNumber *x;
@property (nonatomic, retain) NSNumber *y;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTargetId:(id)arg1;
- (void)setX:(id)arg1;
- (void)setY:(id)arg1;
- (id)targetId;
- (id)x;
- (id)y;

@end