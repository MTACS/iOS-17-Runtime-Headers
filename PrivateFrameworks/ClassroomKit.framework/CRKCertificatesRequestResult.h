
@interface CRKCertificatesRequestResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _certificateDataCollection;
    bool  _validRequest;
}

@property (nonatomic, readonly, copy) NSArray *certificateDataCollection;
@property (getter=isValidRequest, nonatomic, readonly) bool validRequest;

+ (id)invalidResult;
+ (id)resultWithCertificateDataCollection:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificateDataCollection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsValidRequest:(bool)arg1 certificateDataCollection:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToResult:(id)arg1;
- (bool)isValidRequest;

@end
