
@interface GEOBookedTable : PBCodable <NSCopying> {
    NSString * _appId;
    bool  _bookedUsingMaps;
    bool  _called;
    bool  _cancelled;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int has_bookedUsingMaps : 1; 
        unsigned int has_called : 1; 
        unsigned int has_cancelled : 1; 
        unsigned int has_isAsync : 1; 
        unsigned int has_routed : 1; 
        unsigned int has_shared : 1; 
        unsigned int has_tappedCancelReservation : 1; 
        unsigned int has_tappedChangeReservation : 1; 
        unsigned int has_tappedProactiveTrayItem : 1; 
        unsigned int has_viewedDetailsFromPlacecard : 1; 
        unsigned int has_viewedInPlacecard : 1; 
        unsigned int has_viewedInProactiveTray : 1; 
    }  _flags;
    bool  _isAsync;
    unsigned long long  _muid;
    bool  _routed;
    bool  _shared;
    bool  _tappedCancelReservation;
    bool  _tappedChangeReservation;
    bool  _tappedProactiveTrayItem;
    bool  _viewedDetailsFromPlacecard;
    bool  _viewedInPlacecard;
    bool  _viewedInProactiveTray;
}

@property (nonatomic, retain) NSString *appId;
@property (nonatomic) bool bookedUsingMaps;
@property (nonatomic) bool called;
@property (nonatomic) bool cancelled;
@property (nonatomic, readonly) bool hasAppId;
@property (nonatomic) bool hasBookedUsingMaps;
@property (nonatomic) bool hasCalled;
@property (nonatomic) bool hasCancelled;
@property (nonatomic) bool hasIsAsync;
@property (nonatomic) bool hasMuid;
@property (nonatomic) bool hasRouted;
@property (nonatomic) bool hasShared;
@property (nonatomic) bool hasTappedCancelReservation;
@property (nonatomic) bool hasTappedChangeReservation;
@property (nonatomic) bool hasTappedProactiveTrayItem;
@property (nonatomic) bool hasViewedDetailsFromPlacecard;
@property (nonatomic) bool hasViewedInPlacecard;
@property (nonatomic) bool hasViewedInProactiveTray;
@property (nonatomic) bool isAsync;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) bool routed;
@property (nonatomic) bool shared;
@property (nonatomic) bool tappedCancelReservation;
@property (nonatomic) bool tappedChangeReservation;
@property (nonatomic) bool tappedProactiveTrayItem;
@property (nonatomic) bool viewedDetailsFromPlacecard;
@property (nonatomic) bool viewedInPlacecard;
@property (nonatomic) bool viewedInProactiveTray;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)appId;
- (bool)bookedUsingMaps;
- (bool)called;
- (bool)cancelled;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppId;
- (bool)hasBookedUsingMaps;
- (bool)hasCalled;
- (bool)hasCancelled;
- (bool)hasIsAsync;
- (bool)hasMuid;
- (bool)hasRouted;
- (bool)hasShared;
- (bool)hasTappedCancelReservation;
- (bool)hasTappedChangeReservation;
- (bool)hasTappedProactiveTrayItem;
- (bool)hasViewedDetailsFromPlacecard;
- (bool)hasViewedInPlacecard;
- (bool)hasViewedInProactiveTray;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAsync;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (bool)routed;
- (void)setAppId:(id)arg1;
- (void)setBookedUsingMaps:(bool)arg1;
- (void)setCalled:(bool)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setHasBookedUsingMaps:(bool)arg1;
- (void)setHasCalled:(bool)arg1;
- (void)setHasCancelled:(bool)arg1;
- (void)setHasIsAsync:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasRouted:(bool)arg1;
- (void)setHasShared:(bool)arg1;
- (void)setHasTappedCancelReservation:(bool)arg1;
- (void)setHasTappedChangeReservation:(bool)arg1;
- (void)setHasTappedProactiveTrayItem:(bool)arg1;
- (void)setHasViewedDetailsFromPlacecard:(bool)arg1;
- (void)setHasViewedInPlacecard:(bool)arg1;
- (void)setHasViewedInProactiveTray:(bool)arg1;
- (void)setIsAsync:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setRouted:(bool)arg1;
- (void)setShared:(bool)arg1;
- (void)setTappedCancelReservation:(bool)arg1;
- (void)setTappedChangeReservation:(bool)arg1;
- (void)setTappedProactiveTrayItem:(bool)arg1;
- (void)setViewedDetailsFromPlacecard:(bool)arg1;
- (void)setViewedInPlacecard:(bool)arg1;
- (void)setViewedInProactiveTray:(bool)arg1;
- (bool)shared;
- (bool)tappedCancelReservation;
- (bool)tappedChangeReservation;
- (bool)tappedProactiveTrayItem;
- (bool)viewedDetailsFromPlacecard;
- (bool)viewedInPlacecard;
- (bool)viewedInProactiveTray;
- (void)writeTo:(id)arg1;

@end
