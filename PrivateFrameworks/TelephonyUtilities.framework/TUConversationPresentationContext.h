
@interface TUConversationPresentationContext : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _mode;
}

@property (nonatomic) unsigned long long mode;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPresentationContext:(id)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;

@end
