
@interface IDSWRMLinkRecommendationMetric : NSObject <CUTCoreAnalyticsMetric> {
    unsigned int  _infraWiFiState;
    unsigned int  _magnetState;
    unsigned int  _primaryLinkType;
    unsigned int  _recommendedLinkType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int infraWiFiState;
@property (nonatomic, readonly) unsigned int magnetState;
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned int primaryLinkType;
@property (nonatomic, readonly) unsigned int recommendedLinkType;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (unsigned int)infraWiFiState;
- (id)initWithRecommendedLinkType:(unsigned int)arg1 primaryLinkType:(unsigned int)arg2 magnetState:(unsigned int)arg3 infraWiFiState:(unsigned int)arg4;
- (unsigned int)magnetState;
- (id)name;
- (unsigned int)primaryLinkType;
- (unsigned int)recommendedLinkType;

@end
