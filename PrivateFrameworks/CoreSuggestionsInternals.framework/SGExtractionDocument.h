
@interface SGExtractionDocument : NSObject {
    NSArray * _enrichedTaggedCharacterRanges;
    NSDictionary * _indexSetForOutputNameLabel;
    NSDictionary * _modelOutput;
}

@property (nonatomic, retain) NSArray *enrichedTaggedCharacterRanges;
@property (nonatomic, retain) NSDictionary *indexSetForOutputNameLabel;
@property (nonatomic, retain) NSDictionary *modelOutput;

+ (id)allDayDateComponentsFromDate:(id)arg1;
+ (id)candidatesForLabelTokenIndexes:(id)arg1 inPlainText:(id)arg2 forTaggedCharacterRanges:(id)arg3;
+ (id)candidatesForLabelsWithPlainTextIndexSets:(id)arg1 inPlainText:(id)arg2;
+ (id)candidatesForPlainTextIndexSet:(id)arg1 inPlainText:(id)arg2;
+ (id)dateComponentsFromDataDetectorMatch:(id)arg1 inferDates:(bool)arg2 approximateTime:(bool)arg3 partialDate:(bool)arg4 useEndForDurations:(bool)arg5;
+ (id)dateComponentsFromDate:(id)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })firstRangeInIndexSet:(id)arg1;
+ (id)indexSetForOutputNameLabelForModelOutput:(id)arg1;
+ (id)keyForOutputName:(id)arg1 label:(id)arg2;
+ (id)labelTokenIndexesForOutputName:(id)arg1 label:(id)arg2 modelOutput:(id)arg3;
+ (id)labelTokenIndexesForOutputName:(id)arg1 label:(id)arg2 modelOutput:(id)arg3 maxMergeDistance:(unsigned long long)arg4;
+ (id)mergeComponent:(unsigned long long)arg1 usingBaseDateComponents:(id)arg2 withDateComponents:(id)arg3;
+ (id)mergeDetectedDateComponents:(id)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeForIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTaggedCharacterRanges:(id)arg2;

- (void).cxx_destruct;
- (id)candidatesForLabelTokenIndexes:(id)arg1 inPlainText:(id)arg2;
- (id)dataDetectorMatchesForTokenIndexes:(id)arg1 dataDetectorMatches:(id)arg2 allowDatesInPast:(bool)arg3 allowTimeOffset:(bool)arg4;
- (id)detectedDateComponentsForTokenIndexes:(id)arg1 dataDetectorMatches:(id)arg2 allowDatesInPast:(bool)arg3 inferDates:(bool)arg4 approximateTime:(bool)arg5 partialDate:(bool)arg6 allowTimeOffset:(bool)arg7 useEndForDurations:(bool)arg8;
- (id)detectedDateComponentsForTokenIndexes:(id)arg1 dataDetectorMatches:(id)arg2 allowDatesInPast:(bool)arg3 inferDates:(bool)arg4 approximateTime:(bool)arg5 partialDate:(bool)arg6 useEndForDurations:(bool)arg7;
- (id)enrichedTaggedCharacterRanges;
- (id)indexSetForOutputNameLabel;
- (id)initWithEnrichedTaggedCharacterRanges:(id)arg1 modelOutput:(id)arg2;
- (id)labelTokenIndexesForOutputName:(id)arg1 label:(id)arg2;
- (id)modelOutput;
- (void)setEnrichedTaggedCharacterRanges:(id)arg1;
- (void)setIndexSetForOutputNameLabel:(id)arg1;
- (void)setModelOutput:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeForTokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
