
@interface DMFFetchOSUpdateStatusResultObject : CATTaskResultObject {
    double  _downloadPercentComplete;
    NSString * _productKey;
    unsigned long long  _status;
}

@property (nonatomic) double downloadPercentComplete;
@property (nonatomic, copy) NSString *productKey;
@property (nonatomic) unsigned long long status;

+ (id)descriptionForStatus:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (double)downloadPercentComplete;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductKey:(id)arg1 status:(unsigned long long)arg2 downloadPercentComplete:(double)arg3;
- (id)productKey;
- (void)setDownloadPercentComplete:(double)arg1;
- (void)setProductKey:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;

@end
