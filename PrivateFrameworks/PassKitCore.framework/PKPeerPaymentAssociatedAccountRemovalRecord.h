
@interface PKPeerPaymentAssociatedAccountRemovalRecord : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSDate * _date;
    bool  _hasPresentedNotification;
    long long  _reason;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) bool hasPresentedNotification;
@property (nonatomic) long long reason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPresentedNotification;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)reason;
- (void)setAltDSID:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setHasPresentedNotification:(bool)arg1;
- (void)setReason:(long long)arg1;

@end
