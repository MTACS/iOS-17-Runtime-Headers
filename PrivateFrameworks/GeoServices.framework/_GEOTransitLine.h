
@interface _GEOTransitLine : NSObject <GEOTransitLine, NSSecureCoding> {
    GEOPBTransitLine * _line;
    struct { 
        double latitude; 
        double longitude; 
    }  _locationHint;
    <GEOTransitSystem> * _system;
}

@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *alternateArtwork;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long departureTimeDisplayStyle;
@property (nonatomic, readonly) bool departuresAreVehicleSpecific;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasLineColorString;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *headerArtwork;
@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (nonatomic, readonly) bool isBus;
@property (nonatomic, readonly) NSString *lineColorString;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *modeArtwork;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *operatingHours;
@property (nonatomic, readonly) bool showVehicleNumber;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOTransitSystem> *system;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alternateArtwork;
- (id)artwork;
- (unsigned long long)departureTimeDisplayStyle;
- (bool)departuresAreVehicleSpecific;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLineColorString;
- (id)headerArtwork;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLine:(id)arg1 system:(id)arg2 locationHint:(struct { double x1; double x2; })arg3;
- (bool)isBus;
- (id)lineColorString;
- (id)modeArtwork;
- (unsigned long long)muid;
- (id)name;
- (id)operatingHours;
- (bool)showVehicleNumber;
- (id)styleAttributes;
- (id)system;

@end
