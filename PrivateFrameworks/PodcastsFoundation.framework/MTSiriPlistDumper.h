
@interface MTSiriPlistDumper : NSObject {
    _TtC18PodcastsFoundation11SiriDonator * _siriDonator;
}

@property (nonatomic, readonly, retain) _TtC18PodcastsFoundation11SiriDonator *siriDonator;

- (void).cxx_destruct;
- (id)_childFromPlistAtIndex:(long long)arg1 plistArray:(id)arg2;
- (id)createDiffWithAddedPodcasts:(id)arg1 addedStations:(id)arg2 removedPodcasts:(id)arg3 removedStations:(id)arg4;
- (void)dumpPlist;
- (id)initWithAccountController:(id)arg1 backgroundTaskManager:(id)arg2;
- (id)siriDonator;
- (id)subtractDictionary:(id)arg1 fromDictionary:(id)arg2 uniqueKey:(id)arg3;
- (void)writeDiffs:(id)arg1 stationItems:(id)arg2 existingPodcastItems:(id)arg3 existingStationItems:(id)arg4;

@end
