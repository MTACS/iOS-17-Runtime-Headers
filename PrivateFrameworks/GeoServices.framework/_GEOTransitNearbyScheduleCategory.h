
@interface _GEOTransitNearbyScheduleCategory : NSObject <GEOTransitNearbyScheduleCategory> {
    <GEOTransitArtworkDataSource> * _artwork;
    NSString * _displayName;
    NSArray * _groups;
}

@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)artwork;
- (id)displayName;
- (id)groups;
- (id)initWithTransitScheduleCategory:(id)arg1 nearbyScheduleGroups:(id)arg2 categoryArtwork:(id)arg3;

@end
