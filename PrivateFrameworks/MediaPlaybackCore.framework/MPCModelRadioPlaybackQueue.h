
@interface MPCModelRadioPlaybackQueue : NSObject {
    MPModelRadioStation * _radioStation;
    _MPCModelRadioPlaybackQueueStationTracksCollection * _stationTracks;
    ICStoreRequestContext * _storeRequestContext;
}

@property (nonatomic, retain) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, retain) MPModelRadioStation *radioStation;
@property (nonatomic, readonly) MPSectionedCollection *trackModels;
@property (nonatomic, readonly) MPSectionedCollection *tracks;

- (void).cxx_destruct;
- (id)AVItemAtIndex:(long long)arg1;
- (id)identityPropertySet;
- (id)initWithPlaybackContext:(id)arg1;
- (bool)isExplicitItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)radioStation;
- (void)removeAllItems;
- (long long)removeExplicitItems;
- (void)setIdentityPropertySet:(id)arg1;
- (void)setRadioStation:(id)arg1;
- (id)trackForItemAtIndex:(long long)arg1;
- (id)trackModels;
- (id)tracks;
- (id)tracksByApplyingTracksResponse:(id)arg1 currentIndex:(long long)arg2;
- (void)updateWithPersonalizedResponse:(id)arg1;

@end
