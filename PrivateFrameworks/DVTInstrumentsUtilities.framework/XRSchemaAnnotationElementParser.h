
@interface XRSchemaAnnotationElementParser : XRXMLElementParser {
    <XRSchemaAnnotationTextValuesDelegate> * _delegate;
}

@property (nonatomic) <XRSchemaAnnotationTextValuesDelegate> *delegate;

+ (id)_elementNameToClassMap;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)textParserCompletedParsing:(id)arg1 elementName:(id)arg2;

@end
