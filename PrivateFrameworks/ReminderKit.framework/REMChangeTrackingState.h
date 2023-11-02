
@interface REMChangeTrackingState : NSObject <NSCopying, NSSecureCoding> {
    REMChangeToken * _lastConsumedChangeToken;
    NSDate * _lastConsumedDate;
}

@property (nonatomic, retain) REMChangeToken *lastConsumedChangeToken;
@property (nonatomic, retain) NSDate *lastConsumedDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastConsumedChangeToken;
- (id)lastConsumedDate;
- (void)setLastConsumedChangeToken:(id)arg1;
- (void)setLastConsumedDate:(id)arg1;

@end
