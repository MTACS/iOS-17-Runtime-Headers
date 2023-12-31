
@interface NFCISO15693CustomCommandConfiguration : NFCTagCommandConfiguration {
    unsigned long long  _customCommandCode;
    unsigned char  _flags;
    unsigned long long  _manufacturerCode;
    NSData * _requestParameters;
}

@property (nonatomic) unsigned long long customCommandCode;
@property (nonatomic) unsigned char flags;
@property (nonatomic) unsigned long long manufacturerCode;
@property (nonatomic, copy) NSData *requestParameters;

- (void).cxx_destruct;
- (id)asNSDataWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)customCommandCode;
- (unsigned char)flags;
- (id)initWithManufacturerCode:(unsigned long long)arg1 customCommandCode:(unsigned long long)arg2 requestParameters:(id)arg3;
- (id)initWithManufacturerCode:(unsigned long long)arg1 customCommandCode:(unsigned long long)arg2 requestParameters:(id)arg3 maximumRetries:(unsigned long long)arg4 retryInterval:(double)arg5;
- (unsigned long long)manufacturerCode;
- (id)requestParameters;
- (void)setCustomCommandCode:(unsigned long long)arg1;
- (void)setFlags:(unsigned char)arg1;
- (void)setManufacturerCode:(unsigned long long)arg1;
- (void)setRequestParameters:(id)arg1;

@end
