
@interface PGOnThisDayContextualRule : NSObject <PGContextualRule>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_contextualKeyAssetForDayHighlightItem:(id)arg1 contextualLocalDate:(id)arg2 sharingFilter:(unsigned short)arg3;
- (bool)canProvideContextualKeyAssetsWithOptions:(id)arg1;
- (void)enumerateContextualKeyAssetsForYearHighlight:(id)arg1 sharingFilter:(unsigned short)arg2 withOptions:(id)arg3 modelReader:(id)arg4 curationContext:(id)arg5 usingBlock:(id /* block */)arg6;

@end
