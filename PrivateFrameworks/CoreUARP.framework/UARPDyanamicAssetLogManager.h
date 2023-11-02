
@interface UARPDyanamicAssetLogManager : NSObject {
    NSURL * _baseURL;
}

@property (readonly) NSURL *baseURL;

- (void).cxx_destruct;
- (id)baseURL;
- (id)init;
- (id)initWithBaseURL:(id)arg1;
- (bool)newLog:(id)arg1 error:(id*)arg2;

@end
