
@interface ProximityAppleIDSetup.PASExtensionPickedAccount : NSObject <NSSecureCoding> {
    void accountUsername;
    void altDSID;
    void appleID;
    void dsid;
    void firstName;
    void formattedUsername;
    void imageData;
    void isMe;
    void lastName;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
