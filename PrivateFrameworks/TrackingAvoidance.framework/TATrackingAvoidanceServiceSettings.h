
@interface TATrackingAvoidanceServiceSettings : NSObject {
    double  _classificationTimeInterval;
    bool  _enableTAFilterGeneral;
    bool  _enableTAFilterLeavingLOI;
    bool  _enableTAFilterSingleVisit;
    bool  _enableTAFilterVisits;
}

@property (nonatomic, readonly) double classificationTimeInterval;
@property (nonatomic, readonly) bool enableTAFilterGeneral;
@property (nonatomic, readonly) bool enableTAFilterLeavingLOI;
@property (nonatomic, readonly) bool enableTAFilterSingleVisit;
@property (nonatomic, readonly) bool enableTAFilterVisits;

- (double)classificationTimeInterval;
- (bool)enableTAFilterGeneral;
- (bool)enableTAFilterLeavingLOI;
- (bool)enableTAFilterSingleVisit;
- (bool)enableTAFilterVisits;
- (id)initWithDefaults;
- (id)initWithEnableTAFilterGeneral:(bool)arg1 enableTAFilterVisits:(bool)arg2 enableTAFilterSingleVisit:(bool)arg3 enableTAFilterLeavingLOI:(bool)arg4 classificationTimeInterval:(double)arg5;
- (id)initWithEnableTAFilterGeneralOrDefault:(id)arg1 enableTAFilterVisitsOrDefault:(id)arg2 enableTAFilterSingleVisitOrDefault:(id)arg3 enableTAFilterLeavingLOIOrDefault:(id)arg4 classificationTimeIntervalOrDefault:(id)arg5;

@end
