
@interface STSCHWiFiAwareSecurityInfo : NSObject <NSSecureCoding> {
    NSArray * _cipherSuite;
    NSData * _datapathPmk;
    NSData * _datapathPmkID;
    NSArray * _dhInfo;
    NSString * _passphrase;
}

@property (nonatomic, retain) NSArray *cipherSuite;
@property (nonatomic, retain) NSData *datapathPmk;
@property (nonatomic, retain) NSData *datapathPmkID;
@property (nonatomic, retain) NSArray *dhInfo;
@property (nonatomic, retain) NSString *passphrase;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asData;
- (id)cipherSuite;
- (id)datapathPmk;
- (id)datapathPmkID;
- (id)description;
- (id)dhInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCipherSuites:(id)arg1 dhInfo:(id)arg2 passphrase:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithPMK:(id)arg1 pmkID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)passphrase;
- (void)setCipherSuite:(id)arg1;
- (void)setDatapathPmk:(id)arg1;
- (void)setDatapathPmkID:(id)arg1;
- (void)setDhInfo:(id)arg1;
- (void)setPassphrase:(id)arg1;

@end
