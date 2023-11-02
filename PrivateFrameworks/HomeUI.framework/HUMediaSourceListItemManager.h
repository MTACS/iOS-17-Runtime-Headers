
@interface HUMediaSourceListItemManager : HFItemManager {
    NSSet * _containers;
    NSArray * _mediaSourceItems;
    NSArray * _sources;
    unsigned long long  _target;
}

@property (nonatomic, retain) NSSet *containers;
@property (nonatomic, readonly) NSArray *mediaSourceItems;
@property (nonatomic, retain) NSArray *sources;
@property (readonly) unsigned long long target;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)containers;
- (id)initForMediaProfileContainers:(id)arg1 delegate:(id)arg2 forTarget:(unsigned long long)arg3;
- (id)mediaSourceItems;
- (void)setContainers:(id)arg1;
- (void)setSources:(id)arg1;
- (id)sources;
- (unsigned long long)target;

@end
