
@interface CTXPCContextInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountID;
    NSString * _label;
    NSString * _labelID;
    NSString * _phoneNumber;
    long long  _slotID;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *labelID;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, readonly) long long slotID;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)contextWithUUID:(id)arg1 andAccountID:(id)arg2 andSlot:(long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 andAccountID:(id)arg2 andSlot:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)labelID;
- (id)phoneNumber;
- (void)setLabel:(id)arg1;
- (void)setLabelID:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (long long)slotID;
- (id)uuid;

@end
