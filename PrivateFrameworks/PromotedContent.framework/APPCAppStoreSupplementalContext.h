
@interface APPCAppStoreSupplementalContext : NSObject <APPCPromotableAppStoreSupplementalContext> {
    void adamId;
    void additionalClickCaps;
    void additionalImpressionCaps;
    void appMetadataFields;
    void clickCap;
    void impressionCap;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requestTime;
    void storeFront;
    void storeFrontLocale;
}

@property (nonatomic, copy) NSString *adamId;
@property (nonatomic, copy) NSDictionary *additionalClickCaps;
@property (nonatomic, copy) NSDictionary *additionalImpressionCaps;
@property (nonatomic, copy) NSDictionary *appMetadataFields;
@property (nonatomic, copy) NSDictionary *clickCap;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSDictionary *impressionCap;
@property (nonatomic, copy) NSDate *requestTime;
@property (nonatomic, readonly) NSString *storeFront;
@property (nonatomic, readonly) NSString *storeFrontLocale;

- (void).cxx_destruct;
- (id)adamId;
- (id)additionalClickCaps;
- (id)additionalImpressionCaps;
- (id)appMetadataFields;
- (id)clickCap;
- (id)copyWithZone:(void*)arg1;
- (id)dictionaryRepresentation;
- (id)impressionCap;
- (id)init;
- (id)requestTime;
- (void)setAdamId:(id)arg1;
- (void)setAdditionalClickCaps:(id)arg1;
- (void)setAdditionalImpressionCaps:(id)arg1;
- (void)setAppMetadataFields:(id)arg1;
- (void)setClickCap:(id)arg1;
- (void)setImpressionCap:(id)arg1;
- (void)setRequestTime:(id)arg1;
- (id)storeFront;
- (id)storeFrontLocale;

@end
