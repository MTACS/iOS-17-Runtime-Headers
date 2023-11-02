
@interface ProximityReader.VASMerchantInternal : NSObject <NSSecureCoding> {
    void localizedName;
    void merchantIdentifier;
    void sendURLOnly;
    void url;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
