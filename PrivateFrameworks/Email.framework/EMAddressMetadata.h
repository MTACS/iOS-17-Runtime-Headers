
@interface EMAddressMetadata : NSObject <NSSecureCoding> {
    NSArray * _capabilities;
    NSDate * _date;
    bool  _supportsEncryptedSubject;
}

@property (nonatomic, copy) NSArray *capabilities;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) bool supportsEncryptedSubject;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)capabilities;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCapabilities:(id)arg1 date:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setSupportsEncryptedSubject:(bool)arg1;
- (bool)supportsEncryptedSubject;

@end
