
@interface MTIDInfo : NSObject <MTID> {
    NSDate * _computedDate;
    NSNumber * _dsId;
    NSDate * _effectiveDate;
    NSDate * _expirationDate;
    NSString * _idString;
    bool  _isSynchronized;
    MTIDScheme * _scheme;
    MTIDSecret * _secret;
    bool  _shouldGenerateMetricsFields;
}

@property (nonatomic, retain) NSDate *computedDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *dsId;
@property (nonatomic, copy) NSDate *effectiveDate;
@property (nonatomic, copy) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *idNamespace;
@property (nonatomic, copy) NSString *idString;
@property (nonatomic, readonly) long long idType;
@property (nonatomic) bool isSynchronized;
@property (nonatomic, readonly) double lifespan;
@property (nonatomic, readonly, copy) NSDictionary *metricsFields;
@property (nonatomic, retain) MTIDScheme *scheme;
@property (nonatomic, retain) MTIDSecret *secret;
@property (nonatomic) bool shouldGenerateMetricsFields;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)computedDate;
- (id)debugInfo;
- (id)description;
- (id)dsId;
- (id)effectiveDate;
- (id)expirationDate;
- (id)idNamespace;
- (id)idString;
- (long long)idType;
- (id)initWithScheme:(id)arg1 secret:(id)arg2 idString:(id)arg3 dsId:(id)arg4 effectiveDate:(id)arg5 expirationDate:(id)arg6;
- (id)initWithScheme:(id)arg1 secret:(id)arg2 idString:(id)arg3 dsId:(id)arg4 effectiveDate:(id)arg5 expirationDate:(id)arg6 shouldGenerateMetricsFields:(bool)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isSynchronized;
- (bool)isValueExpired;
- (double)lifespan;
- (id)metricsFields;
- (id)scheme;
- (id)secret;
- (void)setComputedDate:(id)arg1;
- (void)setDsId:(id)arg1;
- (void)setEffectiveDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIdString:(id)arg1;
- (void)setIsSynchronized:(bool)arg1;
- (void)setScheme:(id)arg1;
- (void)setSecret:(id)arg1;
- (void)setShouldGenerateMetricsFields:(bool)arg1;
- (bool)shouldGenerateMetricsFields;

@end
