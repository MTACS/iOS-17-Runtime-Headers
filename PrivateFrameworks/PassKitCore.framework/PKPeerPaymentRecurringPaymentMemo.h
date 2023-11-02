
@interface PKPeerPaymentRecurringPaymentMemo : NSObject <NSCopying, NSSecureCoding> {
    long long  _color;
    NSString * _emoji;
    NSString * _text;
}

@property (nonatomic) long long color;
@property (nonatomic, copy) NSString *emoji;
@property (nonatomic, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emoji;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setColor:(long long)arg1;
- (void)setEmoji:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
