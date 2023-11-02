
@interface CADMockSpotlightIndexProvider : NSObject <CADSpotlightIndexProvider> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _maxArtificialDelay;
    double  _minArtificialDelay;
    NSMutableArray * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxArtificialDelay;
@property (nonatomic) double minArtificialDelay;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)deleteAllSearchableItemsForBundleID:(id)arg1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1;
- (void)indexSearchableItems:(id)arg1;
- (id)init;
- (id)initWithMinArtificialDelay:(double)arg1 maxArtificialDelay:(double)arg2;
- (id)itemsInIndex;
- (double)maxArtificialDelay;
- (double)minArtificialDelay;
- (id)newSpotlightIndexForBundleID:(id)arg1;
- (void)setMaxArtificialDelay:(double)arg1;
- (void)setMinArtificialDelay:(double)arg1;

@end
