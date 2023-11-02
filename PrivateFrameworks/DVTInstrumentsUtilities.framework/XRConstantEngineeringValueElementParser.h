
@interface XRConstantEngineeringValueElementParser : XRXMLSimpleStringElementParser {
    NSMutableArray * _fields;
    XRConstantEngineeringValue * _parsedValue;
}

@property (nonatomic, readonly) XRConstantEngineeringValue *parsedValue;

+ (id)_elementNameToClassMap;

- (void).cxx_destruct;
- (void)_handleCompletion;
- (id)parsedValue;
- (void)setValue:(id)arg1 forElementName:(id)arg2;

@end
