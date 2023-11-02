
@interface MPCStoreFrontLocalEquivalencyMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware> {
    NSArray * _invalidationObservers;
    MPModelGenericObject * _overridePlayingItem;
    NSIndexPath * _playingItemIndexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *invalidationObservers;
@property (nonatomic, retain) MPModelGenericObject *overridePlayingItem;
@property (nonatomic, copy) NSIndexPath *playingItemIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_stateDumpObject;
- (id)invalidationObservers;
- (id)operationsForPlayerRequest:(id)arg1;
- (id)operationsForRequest:(id)arg1;
- (id)overridePlayingItem;
- (id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4;
- (id)playingItemIndexPath;
- (void)setInvalidationObservers:(id)arg1;
- (void)setOverridePlayingItem:(id)arg1;
- (void)setPlayingItemIndexPath:(id)arg1;

@end
