
@interface TAGeneralDetectionMetrics : NSObject <NSSecureCoding> {
    unsigned long long  _dominantUserActivity;
    bool  _geoNavHint;
    TAInterVisitMetricPerDevice * _interVisitMetrics;
    long long  _pdState;
    bool  _vehicularStateHint;
}

@property (nonatomic, readonly) unsigned long long dominantUserActivity;
@property (nonatomic, readonly) bool geoNavHint;
@property (nonatomic, readonly) TAInterVisitMetricPerDevice *interVisitMetrics;
@property (nonatomic, readonly) long long pdState;
@property (nonatomic, readonly) bool vehicularStateHint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)dominantUserActivity;
- (void)encodeWithCoder:(id)arg1;
- (bool)geoNavHint;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterVisitMetrics:(id)arg1 dominantUserActivity:(unsigned long long)arg2 pdState:(long long)arg3 geoNavHint:(bool)arg4 vehicularStateHint:(bool)arg5;
- (id)interVisitMetrics;
- (bool)isEqual:(id)arg1;
- (long long)pdState;
- (bool)vehicularStateHint;

@end
