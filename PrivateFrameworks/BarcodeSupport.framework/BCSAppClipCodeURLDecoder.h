
@interface BCSAppClipCodeURLDecoder : NSObject {
    BCSParsingServiceConnection * _serviceConnection;
}

+ (id)sharedDecoder;

- (void).cxx_destruct;
- (void)decodeURLWithEncodedData:(id)arg1 codingVersion:(unsigned long long)arg2 requiresAuthorization:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (void)parseEncodedURLData:(id)arg1 version:(unsigned long long)arg2 completion:(id /* block */)arg3;

@end
