
@interface WBSTranslationDiagnosticData : NSObject <NSCopying> {
    NSString * _URLString;
    NSMutableArray * _errors;
    NSString * _errorsAsJSON;
    NSMutableArray * _extractedParagraphs;
    NSString * _extractedParagraphsAsJSON;
    NSMutableArray * _translatedParagraphs;
    NSString * _translatedParagraphsAsJSON;
}

@property (nonatomic, copy) NSString *URLString;
@property (nonatomic, readonly, copy) NSArray *errors;
@property (nonatomic, copy) NSString *errorsAsJSON;
@property (nonatomic, readonly, copy) NSArray *extractedParagraphs;
@property (nonatomic, copy) NSString *extractedParagraphsAsJSON;
@property (nonatomic, readonly, copy) NSArray *translatedParagraphs;
@property (nonatomic, copy) NSString *translatedParagraphsAsJSON;

- (void).cxx_destruct;
- (id)URLString;
- (id)_createFileForContents:(id)arg1 fileName:(id)arg2 inDirectory:(id)arg3;
- (id)_destinationDirectory;
- (void)addError:(id)arg1 forParagraphIdentifier:(id)arg2;
- (void)addExtractedParagraphs:(id)arg1;
- (void)addTranslatedParagraph:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)errors;
- (id)errorsAsJSON;
- (id)extractedParagraphs;
- (id)extractedParagraphsAsJSON;
- (id)init;
- (id)saveDiagnosticDataAsTemporaryFiles;
- (void)setErrorsAsJSON:(id)arg1;
- (void)setExtractedParagraphsAsJSON:(id)arg1;
- (void)setTranslatedParagraphsAsJSON:(id)arg1;
- (void)setURLString:(id)arg1;
- (id)translatedParagraphs;
- (id)translatedParagraphsAsJSON;

@end
