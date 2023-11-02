
@interface LNIntentCollectionSize : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _max;
    NSNumber * _min;
}

@property (nonatomic, readonly, copy) NSNumber *max;
@property (nonatomic, readonly, copy) NSNumber *min;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMin:(id)arg1 max:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)max;
- (id)min;

@end
