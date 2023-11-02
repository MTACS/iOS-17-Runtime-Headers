
@interface WFSendRecipient : NSObject <NSSecureCoding> {
    NSString * _address;
    NSString * _name;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic, readonly) long long contactType;
@property (nonatomic, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (long long)contactType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 address:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)recipientContentItem;
- (void)setAddress:(id)arg1;
- (void)setName:(id)arg1;

@end
