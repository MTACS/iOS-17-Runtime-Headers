
@interface NMSKeepLocalRequestOptions : NSObject <NSCopying> {
    NSString * _cellularBundleIdentifier;
    unsigned long long  _cellularPolicy;
    unsigned long long  _powerPolicy;
    long long  _qualityOfService;
    bool  _requiresValidation;
    double  _timeout;
}

@property (nonatomic, copy) NSString *cellularBundleIdentifier;
@property (nonatomic) unsigned long long cellularPolicy;
@property (nonatomic) unsigned long long powerPolicy;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) bool requiresValidation;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (id)cellularBundleIdentifier;
- (unsigned long long)cellularPolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (unsigned long long)powerPolicy;
- (long long)qualityOfService;
- (bool)requiresValidation;
- (unsigned long long)resolvedConstraints:(unsigned long long)arg1;
- (void)setCellularBundleIdentifier:(id)arg1;
- (void)setCellularPolicy:(unsigned long long)arg1;
- (void)setPowerPolicy:(unsigned long long)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRequiresValidation:(bool)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;

@end
