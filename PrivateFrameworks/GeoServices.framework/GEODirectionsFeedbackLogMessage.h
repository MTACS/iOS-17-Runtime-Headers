
@interface GEODirectionsFeedbackLogMessage : PBCodable <NSCopying> {
    bool  _arrivedAtDestination;
    NSMutableArray * _directionsFeedbacks;
    double  _durationOfTrip;
    GEOLocation * _finalLocation;
    struct { 
        unsigned int has_navigationAudioFeedback : 1; 
        unsigned int has_durationOfTrip : 1; 
        unsigned int has_arrivedAtDestination : 1; 
        unsigned int read_directionsFeedbacks : 1; 
        unsigned int read_finalLocation : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct GEONavigationAudioFeedback { 
        bool _bTHFPAvailableAtEndOfNav; 
        bool _bTHFPRoutesAvailable; 
        bool _currentRouteHFPEnabledAtEndOfNav; 
        int _currentRouteTypeAtEndOfNav; 
        bool _everManuallyChangedRoute; 
        bool _everManuallyEnabledHFPRoute; 
        bool _everViewedAudioSheet; 
        bool _everViewedAudioSheetBTAny; 
        bool _everViewedAudioSheetBTHFP; 
        unsigned int _manuallyChangedRouteCount; 
        unsigned int _manuallyDisabledHFPCount; 
        unsigned int _manuallyEnabledHFPCount; 
        bool _pauseSpokenAudioEnabled; 
        unsigned int _spokenPromptsCount; 
        bool _viewedAudioSheet; 
        bool _viewedAudioSheetBTAny; 
        bool _viewedAudioSheetBTHFP; 
        bool _wirelessRoutesAvailable; 
        struct { 
            unsigned int bTHFPAvailableAtEndOfNav : 1; 
            unsigned int bTHFPRoutesAvailable : 1; 
            unsigned int currentRouteHFPEnabledAtEndOfNav : 1; 
            unsigned int currentRouteTypeAtEndOfNav : 1; 
            unsigned int everManuallyChangedRoute : 1; 
            unsigned int everManuallyEnabledHFPRoute : 1; 
            unsigned int everViewedAudioSheet : 1; 
            unsigned int everViewedAudioSheetBTAny : 1; 
            unsigned int everViewedAudioSheetBTHFP : 1; 
            unsigned int manuallyChangedRouteCount : 1; 
            unsigned int manuallyDisabledHFPCount : 1; 
            unsigned int manuallyEnabledHFPCount : 1; 
            unsigned int pauseSpokenAudioEnabled : 1; 
            unsigned int spokenPromptsCount : 1; 
            unsigned int viewedAudioSheet : 1; 
            unsigned int viewedAudioSheetBTAny : 1; 
            unsigned int viewedAudioSheetBTHFP : 1; 
            unsigned int wirelessRoutesAvailable : 1; 
        } _has; 
    }  _navigationAudioFeedback;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic) bool arrivedAtDestination;
@property (nonatomic, retain) NSMutableArray *directionsFeedbacks;
@property (nonatomic) double durationOfTrip;
@property (nonatomic, retain) GEOLocation *finalLocation;
@property (nonatomic) bool hasArrivedAtDestination;
@property (nonatomic) bool hasDurationOfTrip;
@property (nonatomic, readonly) bool hasFinalLocation;
@property (nonatomic) bool hasNavigationAudioFeedback;
@property (nonatomic) struct GEONavigationAudioFeedback { bool x1; bool x2; bool x3; int x4; bool x5; bool x6; bool x7; bool x8; bool x9; unsigned int x10; unsigned int x11; unsigned int x12; bool x13; unsigned int x14; bool x15; bool x16; bool x17; bool x18; struct { unsigned int x_19_1_1 : 1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 1; unsigned int x_19_1_6 : 1; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 1; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 1; unsigned int x_19_1_14 : 1; unsigned int x_19_1_15 : 1; unsigned int x_19_1_16 : 1; unsigned int x_19_1_17 : 1; unsigned int x_19_1_18 : 1; } x19; } navigationAudioFeedback;

+ (Class)directionsFeedbackType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addDirectionsFeedback:(id)arg1;
- (bool)arrivedAtDestination;
- (void)clearDirectionsFeedbacks;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsFeedbackAtIndex:(unsigned long long)arg1;
- (id)directionsFeedbacks;
- (unsigned long long)directionsFeedbacksCount;
- (double)durationOfTrip;
- (id)finalLocation;
- (bool)hasArrivedAtDestination;
- (bool)hasDurationOfTrip;
- (bool)hasFinalLocation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasNavigationAudioFeedback;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (struct GEONavigationAudioFeedback { bool x1; bool x2; bool x3; int x4; bool x5; bool x6; bool x7; bool x8; bool x9; unsigned int x10; unsigned int x11; unsigned int x12; bool x13; unsigned int x14; bool x15; bool x16; bool x17; bool x18; struct { unsigned int x_19_1_1 : 1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 1; unsigned int x_19_1_6 : 1; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 1; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 1; unsigned int x_19_1_14 : 1; unsigned int x_19_1_15 : 1; unsigned int x_19_1_16 : 1; unsigned int x_19_1_17 : 1; unsigned int x_19_1_18 : 1; } x19; })navigationAudioFeedback;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArrivedAtDestination:(bool)arg1;
- (void)setDirectionsFeedbacks:(id)arg1;
- (void)setDurationOfTrip:(double)arg1;
- (void)setFinalLocation:(id)arg1;
- (void)setHasArrivedAtDestination:(bool)arg1;
- (void)setHasDurationOfTrip:(bool)arg1;
- (void)setHasNavigationAudioFeedback:(bool)arg1;
- (void)setNavigationAudioFeedback:(struct GEONavigationAudioFeedback { bool x1; bool x2; bool x3; int x4; bool x5; bool x6; bool x7; bool x8; bool x9; unsigned int x10; unsigned int x11; unsigned int x12; bool x13; unsigned int x14; bool x15; bool x16; bool x17; bool x18; struct { unsigned int x_19_1_1 : 1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 1; unsigned int x_19_1_6 : 1; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 1; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 1; unsigned int x_19_1_14 : 1; unsigned int x_19_1_15 : 1; unsigned int x_19_1_16 : 1; unsigned int x_19_1_17 : 1; unsigned int x_19_1_18 : 1; } x19; })arg1;
- (void)writeTo:(id)arg1;

@end
