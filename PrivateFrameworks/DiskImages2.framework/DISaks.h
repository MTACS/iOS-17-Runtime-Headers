
@interface DISaks : NSObject {
    DIURL * _URL;
    NSString * _appStr;
}

@property (nonatomic, readonly) DIURL *URL;
@property (nonatomic, readonly) NSString *appStr;

+ (bool)decryptKeyWithData:(id)arg1 destKey:(char *)arg2 destKeySize:(unsigned long long)arg3 error:(id*)arg4;
+ (id)hintFormat:(id)arg1;
+ (id)newACEndpointWithEnvironment:(id)arg1 error:(id*)arg2;
+ (id)newAPIWithError:(id*)arg1;
+ (id)newDawTokenWithError:(id*)arg1;
+ (id)newEnvWithDictionary:(id)arg1 error:(id*)arg2;
+ (id)newSessionWithError:(id*)arg1;
+ (id)newUrl:(id)arg1 api:(id)arg2;
+ (id)request:(id)arg1 session:(id)arg2 json:(id)arg3 error:(id*)arg4;
+ (id)requestSynchronousDataWithRequest:(id)arg1 session:(id)arg2;

- (void).cxx_destruct;
- (id)URL;
- (id)appStr;

@end
