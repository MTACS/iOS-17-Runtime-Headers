
@interface HDHRSOriginalSignedClinicalDataRecord : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _credentialTypes;
    NSString * _issuerIdentifier;
    NSDictionary * _metadata;
    NSData * _rawContent;
    NSDate * _receivedDate;
    NSTimeZone * _receivedDateTimeZone;
    long long  _signatureStatus;
    long long  _sourceType;
    NSURL * _sourceURL;
    NSUUID * _syncIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *credentialTypes;
@property (nonatomic, readonly, copy) NSString *issuerIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSData *rawContent;
@property (nonatomic, readonly, copy) NSDate *receivedDate;
@property (nonatomic, readonly, copy) NSTimeZone *receivedDateTimeZone;
@property (nonatomic, readonly) long long signatureStatus;
@property (nonatomic, readonly) long long sourceType;
@property (nonatomic, readonly, copy) NSURL *sourceURL;
@property (nonatomic, readonly, copy) NSUUID *syncIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialTypes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRawContent:(id)arg1 sourceType:(long long)arg2 sourceURL:(id)arg3 issuerIdentifier:(id)arg4 credentialTypes:(id)arg5 syncIdentifier:(id)arg6 metadata:(id)arg7 receivedDate:(id)arg8 receivedDateTimeZone:(id)arg9 signatureStatus:(long long)arg10;
- (bool)isEqual:(id)arg1;
- (id)issuerIdentifier;
- (id)metadata;
- (id)rawContent;
- (id)receivedDate;
- (id)receivedDateTimeZone;
- (long long)signatureStatus;
- (long long)sourceType;
- (id)sourceURL;
- (id)syncIdentifier;

@end
