
@interface LNSystemContext : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _preciseTimestamp;
    NSString * _staccatoInteractionType;
}

@property (nonatomic, copy) NSDate *preciseTimestamp;
@property (nonatomic, copy) NSString *staccatoInteractionType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)preciseTimestamp;
- (void)setPreciseTimestamp:(id)arg1;
- (void)setStaccatoInteractionType:(id)arg1;
- (id)staccatoInteractionType;

@end
