
@interface _GEOEncyclopedicInfo : NSObject <GEOEncyclopedicInfo> {
    NSMapTable * _attributionMap;
    GEOPDPlace * _placeData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOMapItemAttribution *encyclopedicAttribution;
@property (nonatomic, readonly) NSArray *factoids;
@property (nonatomic, readonly) bool hasPairOfFactoids;
@property (nonatomic, readonly) bool hasStandAloneFactoids;
@property (nonatomic, readonly) bool hasTextBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *placeSummaryFactoids;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *textBlockText;
@property (nonatomic, readonly) NSString *textBlockTitle;

- (void).cxx_destruct;
- (id)encyclopedicAttribution;
- (id)factoidAtIndex:(int)arg1;
- (id)factoids;
- (id)firstFactoidForSemantic:(int)arg1;
- (bool)hasPairOfFactoids;
- (bool)hasStandAloneFactoids;
- (bool)hasTextBlock;
- (id)initWithPlaceData:(id)arg1 attributionMap:(id)arg2;
- (id)placeSummaryFactoids;
- (id)textBlockText;
- (id)textBlockTitle;

@end
