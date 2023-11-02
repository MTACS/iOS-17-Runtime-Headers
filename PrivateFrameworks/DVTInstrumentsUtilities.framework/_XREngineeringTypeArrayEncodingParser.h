
@interface _XREngineeringTypeArrayEncodingParser : XRXMLElementParser {
    NSMutableArray * _fixedTypes;
    NSString * _remainderType;
}

+ (id)_elementNameToClassMap;

- (void).cxx_destruct;
- (void)_handleCompletion;
- (void)_handleStart;
- (void)setRemainder:(id)arg1;
- (void)setSlot:(id)arg1;

@end
