
@interface VKTrafficIncidentFeature : VKTrafficFeature {
    GEOPBTransitArtwork * _artwork;
    NSString * _crossStreet;
    struct optional<gss::IncidentDataSource> { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[1]; 
            unsigned char type; 
        } _value; 
    }  _dataSource;
    float  _elevationMinZoom;
    NSDate * _endDate;
    NSString * _info;
    bool  _isNotForDisplay;
    bool  _isOnSelectedRoute;
    NSDate * _lastUpdatedDate;
    GEORestrictionInfo * _restrictionInfo;
    long long  _routeRelevance;
    long long  _significance;
    NSDate * _startDate;
    NSString * _street;
    NSString * _subtitle;
    NSString * _title;
    long long  _type;
    NSString * _uniqueString;
}

@property (nonatomic, readonly) GEOPBTransitArtwork *artwork;
@property (nonatomic, readonly) NSString *crossStreet;
@property (nonatomic, readonly) struct optional<gss::IncidentDataSource> { bool x1; union ValueUnion { unsigned char x_2_1_1[1]; unsigned char x_2_1_2; } x2; } dataSource;
@property (nonatomic, readonly) GEOFormattedString *effectiveTimeRange;
@property (nonatomic, readonly) float elevationMinZoom;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) GEOFormattedString *formattedSubtitle;
@property (nonatomic, readonly) GEOFormattedString *formattedTitle;
@property (nonatomic, readonly) NSString *info;
@property (nonatomic, readonly) bool isNotForDisplay;
@property (nonatomic) bool isOnSelectedRoute;
@property (nonatomic, readonly) NSDate *lastUpdatedDate;
@property (nonatomic, readonly) NSArray *restrictionDetails;
@property (nonatomic) long long routeRelevance;
@property (nonatomic, readonly) long long significance;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *street;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *uniqueString;

+ (long long)incidentTypeForGeoRouteIncident:(id)arg1;
+ (id)stringForIncidentSignificance:(long long)arg1;
+ (id)stringForIncidentType:(long long)arg1;
+ (id)stringForRouteRelevance:(long long)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)artwork;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crossStreet;
- (struct optional<gss::IncidentDataSource> { bool x1; union ValueUnion { unsigned char x_2_1_1[1]; unsigned char x_2_1_2; } x2; })dataSource;
- (id)effectiveTimeRange;
- (float)elevationMinZoom;
- (id)endDate;
- (id)formattedSubtitle;
- (id)formattedTitle;
- (bool)hasSameIdentifier:(id)arg1;
- (id)info;
- (id)initWithIncidentData:(const void*)arg1;
- (id)initWithRouteIncident:(id)arg1 routeOffsetInMeters:(unsigned int)arg2 routeRelevance:(long long)arg3 onRoute:(id)arg4;
- (bool)isNotForDisplay;
- (bool)isOnSelectedRoute;
- (id)lastUpdatedDate;
- (void)populateDebugNode:(void*)arg1;
- (id)restrictionDetails;
- (long long)routeRelevance;
- (void)setIsOnSelectedRoute:(bool)arg1;
- (void)setRouteRelevance:(long long)arg1;
- (long long)significance;
- (id)startDate;
- (id)street;
- (id)subtitle;
- (id)title;
- (long long)type;
- (id)uniqueString;

@end
