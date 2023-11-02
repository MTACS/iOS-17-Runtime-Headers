
@interface ProximityReader.AccountAuth : NSObject <NSSecureCoding> {
    void altDsId;
    void deviceLocale;
    void gsToken;
    void partnerToken;
    void relink;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
