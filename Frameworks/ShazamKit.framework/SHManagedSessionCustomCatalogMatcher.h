
@interface SHManagedSessionCustomCatalogMatcher : NSObject <SHMatcher, SHMatcherDelegate> {
    NSUUID * _currentRequestID;
    <SHMatcher> * _customCatalogMatcher;
    <SHMatcherDelegate> * _delegate;
}

@property (nonatomic, readonly) NSUUID *currentRequestID;
@property (nonatomic, readonly) <SHMatcher> *customCatalogMatcher;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHMatcherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentRequestID;
- (id)customCatalogMatcher;
- (id)delegate;
- (id)initWithCustomCatalog:(id)arg1;
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)startRecognitionForRequest:(id)arg1;
- (void)stopRecognition;
- (void)stopRecognitionForRequestID:(id)arg1;

@end
