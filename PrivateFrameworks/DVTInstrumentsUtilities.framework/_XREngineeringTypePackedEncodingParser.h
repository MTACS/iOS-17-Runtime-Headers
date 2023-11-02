
@interface _XREngineeringTypePackedEncodingParser : XRXMLElementParser {
    XREngineeringTypeBitpackedEncodingConvention * _convention;
}

@property (nonatomic, retain) XREngineeringTypeBitpackedEncodingConvention *convention;

+ (id)_elementNameToClassMap;

- (void).cxx_destruct;
- (void)_handleCompletion;
- (void)_handleStart;
- (id)convention;
- (void)setConvention:(id)arg1;

@end
