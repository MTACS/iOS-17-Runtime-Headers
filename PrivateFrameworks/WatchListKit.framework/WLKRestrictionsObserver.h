
@interface WLKRestrictionsObserver : NSObject <MCProfileConnectionObserver> {
    NSNumber * _TVRanking;
    WLKDebouncingQueue * _debounceQueue;
    NSNumber * _movieRanking;
}

@property (nonatomic, retain) NSNumber *TVRanking;
@property (nonatomic, retain) WLKDebouncingQueue *debounceQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *movieRanking;
@property (readonly) Class superclass;

+ (id)sharedObserver;

- (void).cxx_destruct;
- (id)TVRanking;
- (void)_evaluateRestrictionsChange;
- (void)dealloc;
- (id)debounceQueue;
- (id)init;
- (id)movieRanking;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setDebounceQueue:(id)arg1;
- (void)setMovieRanking:(id)arg1;
- (void)setTVRanking:(id)arg1;

@end
