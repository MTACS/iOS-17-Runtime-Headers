
@interface _XREngineeringTypeEncodingParser : XRXMLElementParser {
    long long  _bitWidth;
    NSString * _sentinel;
}

@property (nonatomic) long long bitWidth;
@property (nonatomic, retain) NSString *sentinel;

+ (id)_elementNameToClassMap;
+ (id)_elementNameToKVCMap;

- (void).cxx_destruct;
- (void)_handleCompletion;
- (void)_handleStart;
- (long long)bitWidth;
- (id)sentinel;
- (void)setBitWidth:(long long)arg1;
- (void)setSentinel:(id)arg1;

@end
