
@interface TASingleVisitDetectionMetrics : NSObject <NSSecureCoding> {
    TAInterVisitMetricPerDevice * _interVisitMetrics;
    unsigned long long  _loiType;
    unsigned long long  _previousVisitType;
}

@property (nonatomic, readonly) TAInterVisitMetricPerDevice *interVisitMetrics;
@property (nonatomic, readonly) unsigned long long loiType;
@property (nonatomic, readonly) unsigned long long previousVisitType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterVisitMetrics:(id)arg1 loiType:(unsigned long long)arg2 previousVisitType:(unsigned long long)arg3;
- (id)interVisitMetrics;
- (bool)isEqual:(id)arg1;
- (unsigned long long)loiType;
- (unsigned long long)previousVisitType;

@end
