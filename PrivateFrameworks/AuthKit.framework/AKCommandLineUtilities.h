
@interface AKCommandLineUtilities : NSObject {
    NSDateFormatter * _dateFormatter;
}

@property (nonatomic, readonly) NSDateFormatter *dateFormatter;

- (void).cxx_destruct;
- (id)_hostURL;
- (void)createAndExecuteRequestForPath:(id)arg1 requestBody:(id)arg2 httpMethod:(id)arg3 configuration:(id)arg4 completion:(id /* block */)arg5;
- (id)dateFormatter;
- (id)errorFromServerResponseBody:(id)arg1;
- (id)jsonDictionaryForData:(id)arg1 error:(id)arg2;
- (id)mutableJSONRequestForPath:(id)arg1;
- (id)mutableJSONRequestForURL:(id)arg1;

@end
