
@interface PLSearchOCRUtilities : NSObject

+ (id)_ocrTextLineCandidatesFromTextBlockObservation:(id)arg1 tokenizer:(id)arg2 allowLowConfidence:(bool)arg3;
+ (id)_ocrTextLinesFromDocumentObservation:(id)arg1 allowLowConfidence:(bool)arg2;
+ (id)_wordsFromString:(id)arg1 usingTokenizer:(id)arg2;
+ (id)jsonOCRTextLinesFromDocumentObservation:(id)arg1;
+ (id)ocrTextLinesFromDocumentObservation:(id)arg1;
+ (id)spotlightTextLinesFromDocumentObservation:(id)arg1;

@end
