
@interface PTCinematographyDetection : NSObject <NSCopying, NSMutableCopying, PTArraySerialization, PTSerialization> {
    bool  __excludedAsCinematicChoice;
    NSDictionary * __namedSignals;
    NSString * _cachedFocusIdentifier;
    bool  _cachedFocusIdentifierWasSetByClient;
    unsigned long long  _detectionType;
    float  _focusDistance;
    long long  _groupIdentifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
    NSNumber * _trackNumber;
}

@property (getter=_isExcludedAsCinematicChoice, setter=_setExcludedAsCinematicChoice:, nonatomic) bool _excludedAsCinematicChoice;
@property (getter=_isInvalid, setter=_setInvalid:, nonatomic) bool _invalid;
@property (nonatomic, retain) NSDictionary *_namedSignals;
@property (nonatomic, readonly) NSString *accessibilityLabel;
@property (nonatomic, retain) NSString *cachedFocusIdentifier;
@property (nonatomic) bool cachedFocusIdentifierWasSetByClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long detectionType;
@property (nonatomic) float focusDistance;
@property (nonatomic) long long groupIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAutoFocusDetection;
@property (nonatomic, readonly) bool isCustomDetection;
@property (nonatomic, readonly) bool isFixedFocusDetection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic) long long trackIdentifier;
@property (nonatomic, retain) NSNumber *trackNumber;

+ (id)_cinematographyArrayFromDetections:(id)arg1;
+ (unsigned long long)_detectionTypeForPrefix:(id)arg1;
+ (id)_detectionsByFocusIdentifierFromArray:(id)arg1;
+ (id)_detectionsByTrackIdentifierFromArray:(id)arg1;
+ (id)_detectionsFromCinematographyArray:(id)arg1;
+ (id)_detectionsFromInnerAtomStream:(id)arg1;
+ (id)_prefixForDetectionType:(unsigned long long)arg1;
+ (id)accessibilityLabelForDetectionType:(unsigned long long)arg1;
+ (void)initialize;
+ (id)objectFromAtomStream:(id)arg1;
+ (id)objectsFromAtomStream:(id)arg1;
+ (void)registerForSerialization;
+ (unsigned long long)sizeOfSerializedArray:(id)arg1 options:(id)arg2;
+ (bool)writeArray:(id)arg1 toAtomWriter:(id)arg2 options:(id)arg3;

- (void).cxx_destruct;
- (id)_asCinematographyDictionary;
- (void)_clearCachedFocusIdentifier;
- (bool)_copyToDetectionData_0:(struct DetectionData_0 { unsigned long long x1; unsigned long long x2; unsigned int x3; float x4; float x5[4]; }*)arg1;
- (id)_detectionByChangingTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)_fixMissingTrackIdentifier:(long long)arg1;
- (id)_initWithCinematographyDictionary:(id)arg1;
- (id)_initWithDetectionData_0:(struct DetectionData_0 { unsigned long long x1; unsigned long long x2; unsigned int x3; float x4; float x5[4]; }*)arg1;
- (bool)_isEqual:(id)arg1;
- (bool)_isExcludedAsCinematicChoice;
- (bool)_isInvalid;
- (id)_namedSignals;
- (void)_restoreOriginal;
- (void)_setExcludedAsCinematicChoice:(bool)arg1;
- (void)_setInvalid:(bool)arg1;
- (id)accessibilityLabel;
- (id)cachedFocusIdentifier;
- (bool)cachedFocusIdentifierWasSetByClient;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)detectionType;
- (float)focusDistance;
- (id)focusIdentifier;
- (long long)groupIdentifier;
- (unsigned long long)hash;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 focusDistance:(float)arg3;
- (bool)isAutoFocusDetection;
- (bool)isCustomDetection;
- (bool)isEqual:(id)arg1;
- (bool)isFixedFocusDetection;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setCachedFocusIdentifier:(id)arg1;
- (void)setCachedFocusIdentifierWasSetByClient:(bool)arg1;
- (void)setDetectionType:(unsigned long long)arg1;
- (void)setFocusDistance:(float)arg1;
- (void)setFocusIdentifier:(id)arg1;
- (void)setGroupIdentifier:(long long)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTrackIdentifier:(long long)arg1;
- (void)setTrackNumber:(id)arg1;
- (void)set_namedSignals:(id)arg1;
- (unsigned long long)sizeOfSerializedObjectWithOptions:(id)arg1;
- (bool)supportsVersion:(unsigned long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (long long)trackIdentifier;
- (id)trackNumber;
- (bool)writeToAtomWriter:(id)arg1 options:(id)arg2;

@end
