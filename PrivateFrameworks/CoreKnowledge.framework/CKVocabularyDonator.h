
@interface CKVocabularyDonator : NSObject {
    NSString * _originAppId;
    NSObject<KVDonateServiceProvider> * _serviceProvider;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)init;
- (id)initWithOriginAppId:(id)arg1 serviceProvider:(id)arg2;
- (void)replaceAllVocabularyOfClass:(Class)arg1 withVocabulary:(id)arg2 completion:(id /* block */)arg3;

@end
