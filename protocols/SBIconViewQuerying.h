
@protocol SBIconViewQuerying <NSObject>

@required

- (void)enumerateDisplayedIconViewsForIcon:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 7: SBIcon *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SBIconView *, void*
- (void)enumerateDisplayedIconViewsUsingBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SBIconView *, bool*, void*
- (SBIconView *)firstIconViewForIcon:(SBIcon *)arg1;
- (SBIconView *)firstIconViewForIcon:(SBIcon *)arg1 excludingLocations:(NSSet *)arg2;
- (SBIconView *)firstIconViewForIcon:(SBIcon *)arg1 inLocations:(NSArray *)arg2;
- (SBIconView *)iconViewForIcon:(SBIcon *)arg1 location:(NSString *)arg2;
- (bool)isDisplayingIcon:(SBIcon *)arg1;
- (bool)isDisplayingIcon:(SBIcon *)arg1 inLocation:(NSString *)arg2;
- (bool)isDisplayingIcon:(SBIcon *)arg1 inLocations:(NSArray *)arg2;
- (bool)isDisplayingIconView:(SBIconView *)arg1;
- (bool)isDisplayingIconView:(SBIconView *)arg1 inLocation:(NSString *)arg2;

@optional

- (void)enumerateDisplayedIconViewsWithOptions:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SBIconView *, bool*, void*
- (void)enumerateIconViewQueryableChildrenWithOptions:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 9: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SBIconViewQuerying><SBIconLocationPresenting> *, unsigned long long, bool*, void*
- (SBIconView *)firstIconViewForIcon:(SBIcon *)arg1 options:(unsigned long long)arg2;
- (SBIconView *)firstIconViewWithOptions:(void *)arg1 iconPassingTest:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, SBIcon *, void*
- (SBIconView *)iconViewForIcon:(SBIcon *)arg1 location:(NSString *)arg2 options:(unsigned long long)arg3;
- (bool)isDisplayingIcon:(SBIcon *)arg1 inLocation:(NSString *)arg2 options:(unsigned long long)arg3;
- (bool)isDisplayingIcon:(SBIcon *)arg1 options:(unsigned long long)arg2;
- (bool)isDisplayingIconView:(SBIconView *)arg1 options:(unsigned long long)arg2;

@end
