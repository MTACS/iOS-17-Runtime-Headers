
@interface XRSchemaPatternRestrictionElementParser : XRXMLElementParser {
    <XRSchemaRegexPatternDetectionDelegate> * _delegate;
}

@property (nonatomic) <XRSchemaRegexPatternDetectionDelegate> *delegate;

+ (id)_elementNameToClassMap;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end
