
@interface PGSharedLibraryAssetPropertiesMetricEvent : PGPhotosChallengeMetricEvent <PLMultiplePayloadsMetricEvent> {
    NSMutableDictionary * _payloadByAssetIdentifier;
    NSDictionary * _resultsByAssetIdentifier;
    PGManagerWorkingContext * _workingContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *payload;
@property (nonatomic, readonly) NSArray *payloads;
@property (nonatomic, retain) NSDictionary *resultsByAssetIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (void)gatherMetricsWithProgressBlock:(id /* block */)arg1;
- (id)identifier;
- (id)initWithWorkingContext:(id)arg1 questionMetricType:(unsigned short)arg2 metricEventFetchHelper:(id)arg3;
- (id)payloads;
- (id)resultsByAssetIdentifier;
- (void)setResultsByAssetIdentifier:(id)arg1;

@end
