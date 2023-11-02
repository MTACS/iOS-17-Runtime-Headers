
@interface FSFCurareInteractionFeatureStoreStream : NSObject <FSFStreamSourceProtocol> {
    <FSFFeatureStoreStream> * _biomeStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)createError:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)deleteCurrentStream;
- (id)initWithStreamId:(id)arg1;
- (bool)insert:(id)arg1 error:(id*)arg2;
- (id)retrieve:(id)arg1;
- (void)retrieve:(id)arg1 completionHandler:(id /* block */)arg2;

@end
