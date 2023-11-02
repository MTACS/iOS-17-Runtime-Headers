
@interface MNGuidanceSignDescription : NSObject <NSSecureCoding> {
    <GEOTransitArtworkDataSource> * _artworkOverride;
    int  _composedGuidanceEventIndex;
    NSArray * _details;
    NSMeasurement * _displayRemainingDistance;
    long long  _distanceDetailLevel;
    bool  _isStaticText;
    GEOJunction * _junction;
    NSArray * _primaryStrings;
    double  _remainingDistance;
    NSArray * _secondaryStrings;
    int  _shieldID;
    NSString * _shieldStringID;
    NSString * _shieldText;
    NSArray * _titles;
    NSUUID * _uniqueID;
    NSDictionary * _variableOverrides;
}

@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artworkOverride;
@property (nonatomic, readonly) int composedGuidanceEventIndex;
@property (nonatomic, readonly) NSArray *details;
@property (nonatomic, retain) NSMeasurement *displayRemainingDistance;
@property (nonatomic, readonly) long long distanceDetailLevel;
@property (nonatomic) bool isStaticText;
@property (nonatomic, readonly) GEOJunction *junction;
@property (nonatomic, retain) NSArray *primaryStrings;
@property (nonatomic) double remainingDistance;
@property (nonatomic, retain) NSArray *secondaryStrings;
@property (nonatomic, readonly) int shieldID;
@property (nonatomic, readonly) NSString *shieldStringID;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) NSArray *titles;
@property (nonatomic, readonly) NSUUID *uniqueID;
@property (nonatomic, readonly) NSDictionary *variableOverrides;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artworkOverride;
- (int)composedGuidanceEventIndex;
- (id)debugDescription;
- (id)description;
- (id)details;
- (id)displayRemainingDistance;
- (long long)distanceDetailLevel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 titles:(id)arg2 details:(id)arg3 variableOverrides:(id)arg4 distanceDetailLevel:(int)arg5 junction:(id)arg6 artworkOverride:(id)arg7 shieldText:(id)arg8 shieldID:(int)arg9 shieldStringID:(id)arg10 composedGuidanceEventIndex:(int)arg11;
- (bool)isStaticText;
- (id)junction;
- (id)primaryStrings;
- (double)remainingDistance;
- (id)secondaryStrings;
- (void)setDisplayRemainingDistance:(id)arg1;
- (void)setIsStaticText:(bool)arg1;
- (void)setPrimaryStrings:(id)arg1;
- (void)setRemainingDistance:(double)arg1;
- (void)setSecondaryStrings:(id)arg1;
- (int)shieldID;
- (id)shieldStringID;
- (id)shieldText;
- (id)titles;
- (id)uniqueID;
- (id)variableOverrides;

@end
