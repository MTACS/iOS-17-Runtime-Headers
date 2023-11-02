
@interface _UINavigationBarItemStackEntry : NSObject {
    UINavigationItem * _item;
    _UINavigationBarLayout * _normalLayout;
    bool  _searchActive;
    _UINavigationBarLayout * _searchLayout;
}

@property (nonatomic, readonly) _UINavigationBarLayout *activeLayout;
@property (nonatomic, readonly) _UINavigationBarLayout *inactiveLayout;
@property (nonatomic, readonly) UINavigationItem *item;
@property (nonatomic, retain) _UINavigationBarLayout *normalLayout;
@property (getter=isSearchActive, nonatomic) bool searchActive;
@property (nonatomic, retain) _UINavigationBarLayout *searchLayout;

+ (id)entryForItem:(id)arg1 replaceExistingWithNew:(bool)arg2;
+ (id)newEntryForItem:(id)arg1;

- (void).cxx_destruct;
- (id)activeLayout;
- (void)dealloc;
- (id)description;
- (id)inactiveLayout;
- (bool)isSearchActive;
- (id)item;
- (id)normalLayout;
- (id)searchLayout;
- (void)setNormalLayout:(id)arg1;
- (void)setSearchActive:(bool)arg1;
- (void)setSearchLayout:(id)arg1;
- (void)updateStateFromCounterpart:(id)arg1;

@end
