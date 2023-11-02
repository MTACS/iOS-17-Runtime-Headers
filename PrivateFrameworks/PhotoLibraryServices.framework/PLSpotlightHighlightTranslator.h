
@interface PLSpotlightHighlightTranslator : NSObject

+ (id)_personsFromGraphData:(id)arg1 photoLibrary:(id)arg2;
+ (id)_scenesFromGraphData:(id)arg1 sceneTaxonomyProvider:(id)arg2;
+ (id)_seasonsForHighlight:(id)arg1 graphData:(id)arg2 searchConfiguration:(id)arg3;
+ (id)spotlightSearchableItemFromHighlight:(id)arg1 graphData:(id)arg2 searchConfiguration:(id)arg3;

@end
