
@interface SGReminderMessage : SGExtractionDocument {
    SGPipelineEntity * _entity;
    SGDuplicateKey * _extractedReminderDuplicateKey;
    SGMessage * _message;
    NSArray * _plainTextDetectedData;
}

@property (nonatomic, retain) SGPipelineEntity *entity;
@property (nonatomic, retain) SGDuplicateKey *extractedReminderDuplicateKey;
@property (nonatomic, retain) SGMessage *message;
@property (nonatomic, retain) NSArray *plainTextDetectedData;

+ (id)confirmationOptionalTokens;
+ (id)detectedTitleInModelOutput:(id)arg1 enrichedTaggedCharacterRanges:(id)arg2 textContent:(id)arg3 language:(id)arg4;
+ (bool)enrichedTaggedCharacterRangesContainsProfanity:(id)arg1;
+ (id)excludeList;
+ (bool)excludedContent:(id)arg1;
+ (id)frenchPrependForEnrichedTaggedCharacterRanges:(id)arg1 actionVerbIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (bool)isConfirmationOptionalForContent:(id)arg1;
+ (id)posTaggerNouns;
+ (id)regexFromJoinedArray:(id)arg1 wordBoundary:(id)arg2;
+ (id)searchTokensForReminderTitle:(id)arg1;
+ (bool)shouldAddTitlePrefixForContent:(id)arg1;
+ (id)titlePrefixTokens;
+ (id)titlePrependForActionVerbIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 enrichedTaggedCharacterRanges:(id)arg2 language:(id)arg3 content:(id)arg4;
+ (bool)tokensMatchedInContent:(id)arg1 content:(id)arg2;
+ (id)triggerOptionalTokens;
+ (bool)validActionVerbIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 enrichedTaggedCharacterRanges:(id)arg2;
+ (bool)validModelOutput:(id)arg1 error:(id*)arg2;
+ (bool)validObjectCoreIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 enrichedTaggedCharacterRanges:(id)arg2;

- (void).cxx_destruct;
- (id)_labelTokenIndexesForOutputName:(id)arg1 label:(id)arg2;
- (id)detectedDueDateComponents;
- (id)detectedTitleForLanguage:(id)arg1;
- (id)dueDateDataDetectorMatches;
- (id)dueLocation;
- (id)entity;
- (id)extractedReminderDuplicateKey;
- (bool)hasTrigger;
- (id)initWithMessage:(id)arg1 entity:(id)arg2 enrichedTaggedCharacterRanges:(id)arg3 modelOutput:(id)arg4;
- (id)initWithMessage:(id)arg1 plainTextDetectedData:(id)arg2 enrichedTaggedCharacterRanges:(id)arg3 modelOutput:(id)arg4;
- (bool)isConfirmation;
- (bool)isProposal;
- (bool)isRejection;
- (bool)isTriggerOptional;
- (id)message;
- (id)plainTextDetectedData;
- (void)setEntity:(id)arg1;
- (void)setExtractedReminderDuplicateKey:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPlainTextDetectedData:(id)arg1;

@end
