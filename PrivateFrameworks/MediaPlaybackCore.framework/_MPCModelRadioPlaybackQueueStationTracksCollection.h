
@interface _MPCModelRadioPlaybackQueueStationTracksCollection : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSHashTable * _activeModelGenericAVItems;
    MPCModelGenericAVItemUserIdentityPropertySet * _identityPropertySet;
    bool  _isSiriInitiated;
    MPPropertySet * _itemProperties;
    MPCPlaybackRequestEnvironment * _playbackRequestEnvironment;
    bool  _prioritizeStartupOverQuality;
    MPSectionedCollection * _trackModels;
    MPSectionedCollection * _tracks;
}

@property (nonatomic, retain) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly, copy) MPSectionedCollection *trackModels;
@property (nonatomic, readonly, copy) MPSectionedCollection *tracks;

- (void).cxx_destruct;
- (id)AVItemAtIndex:(long long)arg1;
- (id)identityPropertySet;
- (id)initWithPlaybackContext:(id)arg1;
- (bool)isExplicitItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)removeAllItems;
- (long long)removeExplicitItems;
- (void)setIdentityPropertySet:(id)arg1;
- (id)trackForItemAtIndex:(long long)arg1;
- (id)trackModels;
- (id)tracks;
- (void)updateWithPersonalizedResponse:(id)arg1;

@end
