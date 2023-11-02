
@interface AKAppleIDPasskeySetupContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _altDSID;
    NSDictionary * _appProvidedData;
}

@property (nonatomic, readonly, copy) NSString *altDSID;
@property (nonatomic, copy) NSDictionary *appProvidedData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)appProvidedData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAltDSID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAppProvidedData:(id)arg1;

@end
