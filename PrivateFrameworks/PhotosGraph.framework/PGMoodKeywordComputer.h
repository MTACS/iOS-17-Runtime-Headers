
@interface PGMoodKeywordComputer : NSObject {
    PGGraphSocialGroupNodeCollection * _bestSocialGroupNodes;
    PGGraphPersonNodeCollection * _familyOrPartnerPersonNodes;
    NSArray * _keywordsRegions;
    PGGraphHolidayNodeCollection * _lunarNewYearHolidayNodes;
    PGGraphMomentNodeCollection * _natureMomentNodes;
    NSOrderedSet * _orderedKeywords;
    PGGraphHighlightTypeNodeCollection * _shortTripTypeNodeCollection;
}

@property (nonatomic, retain) PGGraphSocialGroupNodeCollection *bestSocialGroupNodes;
@property (nonatomic, retain) PGGraphPersonNodeCollection *familyOrPartnerPersonNodes;
@property (nonatomic, retain) NSArray *keywordsRegions;
@property (nonatomic, retain) PGGraphHolidayNodeCollection *lunarNewYearHolidayNodes;
@property (nonatomic, retain) PGGraphMomentNodeCollection *natureMomentNodes;
@property (nonatomic, retain) NSOrderedSet *orderedKeywords;
@property (nonatomic, retain) PGGraphHighlightTypeNodeCollection *shortTripTypeNodeCollection;

- (void).cxx_destruct;
- (id)_bestSocialGroupNodesInGraph:(id)arg1;
- (id)_celebratedHolidayKeywordsForMomentNodes:(id)arg1 inGraph:(id)arg2;
- (id)_familyOrPartnerPersonNodesInGraph:(id)arg1;
- (id)_gatheringAndFamilyKeywordsForTriggeredMemory:(id)arg1 isMeaningfulEventHoliday:(bool)arg2 inGraph:(id)arg3;
- (bool)_isCrowdedForMomentNodes:(id)arg1;
- (id)_keywordsSortedByPriority:(id)arg1;
- (id)_locationTripKeywordsForMomentNodes:(id)arg1 locationHelper:(id)arg2;
- (id)_lunarNewYearHolidayNodesInGraph:(id)arg1;
- (id)_natureMomentNodesInGraph:(id)arg1;
- (id)_shortTripTypeNodeCollectionInGraph:(id)arg1;
- (id)bestSocialGroupNodes;
- (id)familyOrPartnerPersonNodes;
- (id)keywordsRegions;
- (id)lunarNewYearHolidayNodes;
- (id)moodKeywordsForTriggeredMemory:(id)arg1 suggestedMood:(unsigned long long)arg2 inGraph:(id)arg3 locationHelper:(id)arg4;
- (id)natureMomentNodes;
- (id)orderedKeywords;
- (void)setBestSocialGroupNodes:(id)arg1;
- (void)setFamilyOrPartnerPersonNodes:(id)arg1;
- (void)setKeywordsRegions:(id)arg1;
- (void)setLunarNewYearHolidayNodes:(id)arg1;
- (void)setNatureMomentNodes:(id)arg1;
- (void)setOrderedKeywords:(id)arg1;
- (void)setShortTripTypeNodeCollection:(id)arg1;
- (id)shortTripTypeNodeCollection;

@end
