
@interface XRSchemaSimpleTypeElementParser : XRXMLElementParser <XRSchemaAnnotationTextValuesDelegate, XRSchemaRegexPatternDetectionDelegate> {
    <XRSchemaAnnotationPropertyReportingDelegate> * _delegate;
    NSString * _errorMessage;
    NSString * _identifier;
    NSString * _parsedRegex;
    XRXMLElementParser * _patternParser;
}

@property (nonatomic) <XRSchemaAnnotationPropertyReportingDelegate> *delegate;
@property (nonatomic, copy) NSString *identifier;

+ (id)_elementNameToClassMap;

- (void).cxx_destruct;
- (void)checkForAnnotationAndPatternAvailable;
- (id)delegate;
- (void)finishedParsingPatternWithParser:(id)arg1 patternValue:(id)arg2;
- (id)identifier;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)startElementWithName:(id)arg1 attributes:(id)arg2 line:(long long)arg3 col:(long long)arg4;
- (void)textParserCompletedParsing:(id)arg1 elementName:(id)arg2;

@end
