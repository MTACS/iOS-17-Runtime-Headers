
@interface CIDCPayloadBuilderDetails : NSObject {
    NSData * _deviceKey;
    NSString * _docType;
    NSDictionary * _elements;
    unsigned long long  _format;
    long long  _signingAlgorithm;
    NSDate * _validFrom;
    NSDate * _validUntil;
}

@property (nonatomic, retain) NSData *deviceKey;
@property (nonatomic, retain) NSString *docType;
@property (nonatomic, retain) NSDictionary *elements;
@property (nonatomic) unsigned long long format;
@property (nonatomic) long long signingAlgorithm;
@property (nonatomic, retain) NSDate *validFrom;
@property (nonatomic, retain) NSDate *validUntil;

- (void).cxx_destruct;
- (id)deviceKey;
- (id)docType;
- (id)elements;
- (unsigned long long)format;
- (id)initWithFormat:(unsigned long long)arg1 docType:(id)arg2 elements:(id)arg3 validFrom:(id)arg4 validUntil:(id)arg5 deviceKey:(id)arg6;
- (id)initWithFormat:(unsigned long long)arg1 docType:(id)arg2 elements:(id)arg3 validFrom:(id)arg4 validUntil:(id)arg5 deviceKey:(id)arg6 signingAlgorithm:(long long)arg7;
- (void)setDeviceKey:(id)arg1;
- (void)setDocType:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setFormat:(unsigned long long)arg1;
- (void)setSigningAlgorithm:(long long)arg1;
- (void)setValidFrom:(id)arg1;
- (void)setValidUntil:(id)arg1;
- (long long)signingAlgorithm;
- (id)validFrom;
- (id)validUntil;

@end
