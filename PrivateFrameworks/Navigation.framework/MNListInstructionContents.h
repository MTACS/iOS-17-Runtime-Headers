
@interface MNListInstructionContents : NSObject <MNInstructionContents> {
    NSArray * _branchNames;
    GEOComposedWaypoint * _destination;
    NSString * _destinationName;
    double  _distance;
    <GEOServerFormattedString> * _distanceFormat;
    GEOComposedString * _distanceString;
    NSString * _exitNumber;
    NSArray * _instructionFormats;
    NSArray * _instructionStrings;
    NSString * _intersectionName;
    int  _junctionAngle;
    int  _maneuverType;
    NSString * _roadName;
    bool  _suppressFallback;
    bool  _suppressNames;
    bool  _toFreeway;
    NSArray * _towardNames;
    int  _transportType;
}

@property (nonatomic, readonly) long long context;
@property (nonatomic, retain) GEOComposedWaypoint *destination;
@property (nonatomic, retain) NSString *destinationName;
@property (nonatomic) double distance;
@property (nonatomic, retain) <GEOServerFormattedString> *distanceFormat;
@property (nonatomic, retain) GEOComposedString *distanceString;
@property (nonatomic, readonly) bool hasServerContent;
@property (nonatomic, retain) NSArray *instructionFormats;
@property (nonatomic, retain) NSString *roadName;
@property (nonatomic) bool suppressFallback;
@property (nonatomic) bool suppressNames;
@property (nonatomic) int transportType;

+ (id)contentsWithStep:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_distanceFormatOptions;
- (id)_evaluatedStringsForInstructionStrings:(id)arg1;
- (id)_instructionsForFormats:(id)arg1;
- (void)_populateFromStep:(id)arg1;
- (long long)context;
- (id)description;
- (id)destination;
- (id)destinationName;
- (double)distance;
- (id)distanceFormat;
- (id)distanceString;
- (bool)hasServerContent;
- (id)init;
- (id)instruction;
- (id)instructionFormats;
- (id)instructionWithShorterAlternatives;
- (id)roadName;
- (void)setDestination:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setDistance:(double)arg1;
- (void)setDistanceFormat:(id)arg1;
- (void)setDistanceString:(id)arg1;
- (void)setInstructionFormats:(id)arg1;
- (void)setRoadName:(id)arg1;
- (void)setSuppressFallback:(bool)arg1;
- (void)setSuppressNames:(bool)arg1;
- (void)setTransportType:(int)arg1;
- (id)stringForDistance:(double)arg1;
- (bool)suppressFallback;
- (bool)suppressNames;
- (int)transportType;

@end
