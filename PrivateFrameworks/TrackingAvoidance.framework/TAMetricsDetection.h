
@interface TAMetricsDetection : NSObject <NSSecureCoding, TAMetricsProtocol> {
    unsigned long long  _detectionType;
    TAGeneralDetectionMetrics * _generalDetectionMetrics;
    TASPAdvertisement * _latestAdvertisement;
    TASingleVisitDetectionMetrics * _singleVisitDetectionMetrics;
    TAVisitDetectionMetrics * _visitDetectionMetrics;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long detectionType;
@property (nonatomic, readonly) TAGeneralDetectionMetrics *generalDetectionMetrics;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TASPAdvertisement *latestAdvertisement;
@property (nonatomic, readonly) TASingleVisitDetectionMetrics *singleVisitDetectionMetrics;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TAVisitDetectionMetrics *visitDetectionMetrics;

+ (id)convertTADetectionTypeToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)detectionType;
- (void)encodeWithCoder:(id)arg1;
- (id)generalDetectionMetrics;
- (unsigned long long)getMetricsCollectionType;
- (id)initWithCoder:(id)arg1;
- (id)initWithDetectionType:(unsigned long long)arg1 visitDetectionMetrics:(id)arg2 generalDetectionMetrics:(id)arg3 singleVisitDetectionMetrics:(id)arg4 latestAdvertisement:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)latestAdvertisement;
- (id)singleVisitDetectionMetrics;
- (id)visitDetectionMetrics;

@end
