
@interface PARSubscriptionStatus : NSObject <NSCopying, NSSecureCoding> {
    bool  isSubscribed;
}

@property (nonatomic) bool isSubscribed;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isSubscribed;
- (void)setIsSubscribed:(bool)arg1;

@end
