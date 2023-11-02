
@interface MNLPRRuleMatcher : NSObject {
    NSDate * _lastDate;
    _MNLPRPlate * _lastPlate;
    NSTimeZone * _lastTimeZone;
    NSArray * _ruleSets;
    unsigned long long  _signpost;
    NSMutableDictionary * _usedRegionETAs;
    NSDictionary * _usedRegions;
    GEOLPRVehicle * _vehicle;
}

- (void).cxx_destruct;
- (id)debug_jsonDescriptionOfLastPlate;
- (id)generateMaskedPlateForWaypoints:(id)arg1 date:(id)arg2 timeZone:(id)arg3 error:(id*)arg4;
- (id)initForVehicle:(id)arg1 withRules:(id)arg2;

@end
