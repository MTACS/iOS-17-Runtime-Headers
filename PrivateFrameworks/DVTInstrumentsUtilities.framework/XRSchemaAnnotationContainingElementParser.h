
@interface XRSchemaAnnotationContainingElementParser : XRXMLElementParser <XRSchemaAnnotationTextValuesDelegate> {
    <XRSchemaAnnotationPropertyReportingDelegate> * _delegate;
    NSString * _key;
}

@property (nonatomic) <XRSchemaAnnotationPropertyReportingDelegate> *delegate;
@property (nonatomic, copy) NSString *key;

+ (id)_elementNameToClassMap;

- (void).cxx_destruct;
- (id)delegate;
- (id)key;
- (void)setDelegate:(id)arg1;
- (void)setKey:(id)arg1;
- (id)startElementWithName:(id)arg1 attributes:(id)arg2 line:(long long)arg3 col:(long long)arg4;
- (void)textParserCompletedParsing:(id)arg1 elementName:(id)arg2;

@end
