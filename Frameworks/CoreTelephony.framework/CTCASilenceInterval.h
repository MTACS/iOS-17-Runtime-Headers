
@interface CTCASilenceInterval : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _endsAt;
    NSDate * _startsAt;
}

@property (nonatomic, retain) NSDate *endsAt;
@property (nonatomic, retain) NSDate *startsAt;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endsAt;
- (id)initWithCoder:(id)arg1;
- (void)setEndsAt:(id)arg1;
- (void)setStartsAt:(id)arg1;
- (id)startsAt;

@end
