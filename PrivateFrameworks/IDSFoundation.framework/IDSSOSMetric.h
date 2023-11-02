
@interface IDSSOSMetric : NSObject <CUTSOSMetric> {
    NSString * _operationID;
    unsigned long long  _sosDomain;
    long long  _sosError;
    unsigned long long  _sosType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, retain) NSString *operationID;
@property (nonatomic) unsigned long long sosDomain;
@property (nonatomic) long long sosError;
@property (nonatomic) unsigned long long sosType;
@property (readonly) Class superclass;

+ (id)metricWithDomain:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(long long)arg3 bagURL:(id)arg4;

- (void).cxx_destruct;
- (id)initWithDomain:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(long long)arg3 bagURL:(id)arg4;
- (id)name;
- (id)operationID;
- (void)setOperationID:(id)arg1;
- (void)setSosDomain:(unsigned long long)arg1;
- (void)setSosError:(long long)arg1;
- (void)setSosType:(unsigned long long)arg1;
- (unsigned long long)sosDomain;
- (long long)sosError;
- (unsigned long long)sosType;

@end
