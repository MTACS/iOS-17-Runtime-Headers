
@interface AVAirMessageParts : NSObject <AVAirTransportReverseTransformationResultProtocol> {
    long long  _expectedBodyLength;
    NSData * _extraData;
    NSArray * _headers;
    bool  _isIncomplete;
    NSData * _rawBodyData;
    NSArray * _repeatedHeaders;
    NSData * _uncompressedBodyData;
    NSDictionary * _uniqueHeaders;
    NSString * _version;
}

@property (nonatomic, readonly) id airMessage;
@property (nonatomic, readonly) id bodyAsJSON;
@property (nonatomic, readonly) NSDictionary *bodyAsJSONDictionary;
@property (nonatomic, readonly) NSString *bodyAsUTF8Text;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long expectedBodyLength;
@property (nonatomic, readonly) NSData *extraData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *headers;
@property (nonatomic, readonly) bool isIncomplete;
@property (nonatomic, readonly) NSData *rawBodyData;
@property (nonatomic, readonly) NSArray *repeatedHeaders;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *uncompressedBodyData;
@property (nonatomic, readonly) NSDictionary *uniqueHeaders;
@property (nonatomic, readonly) NSString *version;

+ (id)messagePartsWithData:(id)arg1 lineSeparator:(id)arg2 data:(id)arg3 headerBodySeparator:(id)arg4 data:(id)arg5 bodyLengthKey:(id)arg6;
+ (void)registerClass:(Class)arg1 forMessageVersion:(id)arg2;

- (void).cxx_destruct;
- (void)_identifyUniqueAndRepeatedHeadersIfNecessary;
- (Class)_matchingClass;
- (void)_setIncomplete;
- (id)airMessage;
- (id)bodyAsJSON;
- (id)bodyAsJSONDictionary;
- (id)bodyAsUTF8Text;
- (id)decompressBodyUsingAlgorithm:(long long)arg1;
- (id)decompressBodyUsingNamedAlgorithm:(id)arg1;
- (long long)expectedBodyLength;
- (id)extraData;
- (id)headers;
- (id)initWithVersion:(id)arg1 headers:(id)arg2 expectedBodyLength:(long long)arg3 body:(id)arg4 extra:(id)arg5;
- (bool)isIncomplete;
- (id)rawBodyData;
- (id)repeatedHeaders;
- (void)setUncompressedBodyData:(id)arg1;
- (bool)shouldCallReverseTransformerAgain;
- (id)uncompressedBodyData;
- (id)uniqueHeaders;
- (id)version;

@end
