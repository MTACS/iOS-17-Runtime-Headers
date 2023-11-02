
@interface CTCATryOutState : NSObject <NSCopying, NSSecureCoding> {
    bool  _tryOutOfferPending;
}

@property (nonatomic) bool tryOutOfferPending;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTryOutOfferPending:(bool)arg1;
- (bool)tryOutOfferPending;

@end
