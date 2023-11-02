
@interface HKHealthAppIDSMessage : NSObject <NSSecureCoding> {
    <NSSecureCoding> * _payload;
    long long  _type;
}

@property (nonatomic, retain) <NSSecureCoding> *payload;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageKind:(long long)arg1;
- (id)payload;
- (void)setPayload:(id)arg1;
- (long long)type;

@end
