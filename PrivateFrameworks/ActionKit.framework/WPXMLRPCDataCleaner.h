
@interface WPXMLRPCDataCleaner : NSObject {
    NSData * xmlData;
}

- (void).cxx_destruct;
- (id)appendClosingTags:(id)arg1 toResponseString:(id)arg2;
- (id)cleanCharactersBeforePreamble:(id)arg1;
- (id)cleanClosingTagIfNeeded:(id)arg1 lengthOfCharactersPrecedingPreamble:(long long)arg2;
- (id)cleanData;
- (id)cleanInvalidUTF8:(id)arg1;
- (id)cleanInvalidXMLCharacters:(id)arg1;
- (id)cleanWithTidyIfPresent:(id)arg1;
- (id)cloingTagsForString:(id)arg1;
- (id)initWithData:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfLastValidClosingTagInString:(id)arg1;
- (id)repairTruncatedClosingTags:(id)arg1 inResponseString:(id)arg2;

@end
