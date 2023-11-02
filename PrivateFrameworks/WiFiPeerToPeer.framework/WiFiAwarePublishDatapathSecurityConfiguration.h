
@interface WiFiAwarePublishDatapathSecurityConfiguration : NSObject <NSSecureCoding> {
    NSArray * _passphraseList;
    NSData * _pmkID;
    NSArray * _pmkList;
}

@property (nonatomic, readonly) NSArray *passphraseList;
@property (nonatomic, readonly) NSData *pmkID;
@property (nonatomic, readonly) NSArray *pmkList;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPMK:(id)arg1 andPMKID:(id)arg2;
- (id)initWithPMKList:(id)arg1 passphraseList:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)passphraseList;
- (id)pmkID;
- (id)pmkList;

@end
