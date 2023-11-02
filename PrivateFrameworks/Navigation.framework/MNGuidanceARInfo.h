
@interface MNGuidanceARInfo : NSObject <NSSecureCoding> {
    NSString * _arrowLabel;
    int  _eventType;
    double  _heading;
    <GEOServerFormattedString> * _instruction;
    GEOComposedString * _instructionString;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _locationCoordinate;
    struct GEOPolylineCoordinateRange { 
        struct { 
            unsigned int index; 
            float offset; 
        } start; 
        struct { 
            unsigned int index; 
            float offset; 
        } end; 
    }  _locationCoordinateRange;
    NSString * _maneuverRoadName;
    int  _maneuverType;
    unsigned long long  _priority;
    unsigned long long  _stepIndex;
    NSDictionary * _variableOverrides;
}

@property (nonatomic, readonly) NSString *arrowLabel;
@property (nonatomic, readonly) int eventType;
@property (nonatomic, readonly) double heading;
@property (nonatomic, readonly) <GEOServerFormattedString> *instruction;
@property (nonatomic, retain) GEOComposedString *instructionString;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } locationCoordinate;
@property (nonatomic, readonly) struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; } locationCoordinateRange;
@property (nonatomic, readonly) NSString *maneuverRoadName;
@property (nonatomic, readonly) int maneuverType;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, readonly) unsigned long long stepIndex;
@property (nonatomic, readonly) NSDictionary *variableOverrides;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isInstructionStringOutputEqual:(id)arg1;
- (id)arrowLabel;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)eventType;
- (unsigned long long)hash;
- (double)heading;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(int)arg1 maneuverType:(int)arg2 instruction:(id)arg3 variableOverrides:(id)arg4 arrowLabel:(id)arg5 locationCoordinate:(struct { double x1; double x2; double x3; })arg6 maneuverRoadName:(id)arg7 heading:(double)arg8 stepIndex:(unsigned long long)arg9;
- (id)initWithEventType:(int)arg1 maneuverType:(int)arg2 instruction:(id)arg3 variableOverrides:(id)arg4 arrowLabel:(id)arg5 locationCoordinateRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg6 maneuverRoadName:(id)arg7 stepIndex:(unsigned long long)arg8;
- (id)instruction;
- (id)instructionString;
- (bool)isEqual:(id)arg1;
- (struct { double x1; double x2; double x3; })locationCoordinate;
- (struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; })locationCoordinateRange;
- (id)maneuverRoadName;
- (int)maneuverType;
- (unsigned long long)priority;
- (void)setInstructionString:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (unsigned long long)stepIndex;
- (id)variableOverrides;

@end
