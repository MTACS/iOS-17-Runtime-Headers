
@interface _MPCLeaseManager : NSObject <MPCPlaybackEngineEventObserving> {
    NSMutableSet * _leaseEndIgnoreReasons;
    MPCPlaybackEngine * _playbackEngine;
    NSMutableDictionary * _prepareCompletions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *leaseEndIgnoreReasons;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, retain) NSMutableDictionary *prepareCompletions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_itemShouldPreventPlaybackDidChangeNotification:(id)arg1;
- (void)_updateStateForPlaybackPrevention;
- (void)beginIgnoringLeaseEndEventsForReason:(id)arg1;
- (void)dealloc;
- (void)endIgnoringLeaseEndEventsForReason:(id)arg1;
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
- (void)getHasPreparedLeaseForAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)leaseEndIgnoreReasons;
- (id)playbackEngine;
- (id)prepareCompletions;
- (void)prepareForCurrentItemPlayback;
- (void)prepareForPlaybackWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)setCanStealLeaseIfNeeded;
- (void)setLeaseEndIgnoreReasons:(id)arg1;
- (void)setPrepareCompletions:(id)arg1;

@end
