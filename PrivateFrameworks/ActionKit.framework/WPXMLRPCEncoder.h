
@interface WPXMLRPCEncoder : NSObject {
    NSNumber * _faultCode;
    NSString * _faultString;
    bool  _isFault;
    bool  _isResponse;
    NSString * _method;
    NSArray * _parameters;
    NSFileHandle * _streamingCacheFile;
}

@property (nonatomic, readonly) NSData *body;
@property (nonatomic, readonly) NSString *method;
@property (nonatomic, readonly) NSArray *parameters;

- (void).cxx_destruct;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (id)body;
- (id)dataEncodedWithError:(id*)arg1;
- (void)encodeArray:(id)arg1;
- (void)encodeBoolean:(struct __CFBoolean { }*)arg1;
- (void)encodeData:(id)arg1;
- (void)encodeDate:(id)arg1;
- (void)encodeDictionary:(id)arg1;
- (void)encodeFileHandle:(id)arg1;
- (void)encodeForStreaming;
- (void)encodeInputStream:(id)arg1;
- (void)encodeNumber:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeString:(id)arg1 omitTag:(bool)arg2;
- (bool)encodeToFile:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithMethod:(id)arg1 andParameters:(id)arg2;
- (id)initWithResponseFaultCode:(id)arg1 andString:(id)arg2;
- (id)initWithResponseParams:(id)arg1;
- (id)method;
- (id)parameters;
- (id)tmpFilePathForCache;
- (void)valueTag:(id)arg1 value:(id)arg2;

@end
