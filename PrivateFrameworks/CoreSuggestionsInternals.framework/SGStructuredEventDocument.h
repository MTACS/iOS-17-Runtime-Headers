
@interface SGStructuredEventDocument : SGExtractionDocument {
    unsigned char  _category;
    NSArray * _dataDetectorMatches;
    bool  _fromSuggestTool;
    NSString * _plainText;
}

@property (nonatomic, readonly) unsigned char category;
@property (nonatomic, readonly) NSArray *dataDetectorMatches;
@property (nonatomic, readonly) NSString *plainText;

+ (id)candidatesForLabelIndexSets:(id)arg1 inPlainText:(id)arg2 forTaggedCharacterRanges:(id)arg3;
+ (bool)caseInsensitiveContainsString:(id)arg1 inCandidates:(id)arg2;
+ (id)cleanCandidates:(id)arg1 outputName:(id)arg2 label:(id)arg3;
+ (id)modelOutputSummary:(id)arg1;
+ (id)simpleCandidateResolutionFromCandidates:(id)arg1;
+ (id)stripRepeatedContent:(id)arg1 repeatedLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_simpleCandidateForOutputName:(id)arg1 label:(id)arg2 withError:(id*)arg3;
- (unsigned char)category;
- (id)dataDetectorMatches;
- (id)detectedAddressForLabel:(id)arg1 withError:(id*)arg2;
- (id)detectedEndAddressWithError:(id*)arg1;
- (id)detectedEndDateComponents;
- (id)detectedEndPlaceWithError:(id*)arg1;
- (id)detectedEventName;
- (bool)detectedEventPolarity;
- (id)detectedPostalAddressExtractionForTokenIndexes:(id)arg1 dataDetectorMatches:(id)arg2 label:(id)arg3;
- (id)detectedReservationIdWithError:(id*)arg1;
- (id)detectedStartAddressWithError:(id*)arg1;
- (id)detectedStartDateComponents;
- (id)detectedStartPlaceWithError:(id*)arg1;
- (id)filterCandidateDateComponents:(id)arg1;
- (id)initWithPlainText:(id)arg1 category:(unsigned char)arg2 dataDetectorMatches:(id)arg3 enrichedTaggedCharacterRanges:(id)arg4 modelOutput:(id)arg5 fromSuggestTool:(bool)arg6;
- (id)labelTokenIndexesForOutputName:(id)arg1 label:(id)arg2;
- (id)mergePostalAddressComponents:(id)arg1;
- (id)modelOutputSummary;
- (id)plainText;
- (id)predictedStringsFromModelOutput;
- (id)resolveCandidates:(id)arg1 forCategory:(unsigned char)arg2 label:(id)arg3 rawIndexSet:(id)arg4 taggedCharacterRanges:(id)arg5;
- (id)titleMapping;

@end
