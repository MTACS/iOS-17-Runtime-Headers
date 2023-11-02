
@interface IDSKTOptInOutStatusData : NSObject <NSSecureCoding> {
    NSString * _ktApplication;
    NSNumber * _optInStatus;
    NSData * _publicAccountKey;
    NSString * _serviceIdentifier;
}

@property (nonatomic, retain) NSString *ktApplication;
@property (nonatomic, retain) NSNumber *optInStatus;
@property (nonatomic, retain) NSData *publicAccountKey;
@property (nonatomic, retain) NSString *serviceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ktApplication;
- (id)optInStatus;
- (id)publicAccountKey;
- (id)serviceIdentifier;
- (void)setKtApplication:(id)arg1;
- (void)setOptInStatus:(id)arg1;
- (void)setPublicAccountKey:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;

@end
