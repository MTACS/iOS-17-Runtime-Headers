
@interface GEOCelestialRiseTransitSet : NSObject {
    double  _julianDay;
    NSDate * _rise;
    struct CAARiseTransitSetDetails { 
        bool bRiseValid; 
        double Rise; 
        bool bTransitValid; 
        bool bTransitAboveHorizon; 
        double Transit; 
        bool bSetValid; 
        double Set; 
    }  _riseTransitSet;
    NSDate * _set;
    NSDate * _transit;
}

@property (nonatomic, readonly) bool isTransitAboveHorizon;
@property (nonatomic, readonly) double julianDay;
@property (nonatomic, readonly) NSDate *rise;
@property (nonatomic, readonly) struct CAARiseTransitSetDetails { bool x1; double x2; bool x3; bool x4; double x5; bool x6; double x7; } riseTransitSet;
@property (nonatomic, readonly) NSDate *set;
@property (nonatomic, readonly) NSDate *transit;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_dateFromOffset:(double)arg1;
- (int)_numberOfEvents;
- (double)_oldestEventInJulianDay;
- (id)description;
- (id)initWithJulianDay:(double)arg1 riseTransitSet:(struct CAARiseTransitSetDetails { bool x1; double x2; bool x3; bool x4; double x5; bool x6; double x7; })arg2;
- (bool)isTransitAboveHorizon;
- (double)julianDay;
- (id)rise;
- (struct CAARiseTransitSetDetails { bool x1; double x2; bool x3; bool x4; double x5; bool x6; double x7; })riseTransitSet;
- (id)set;
- (id)transit;

@end
