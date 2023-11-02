
@interface CKVSearcherFactory : NSObject <CKVSearcherProvider> {
    NSObject<CKVSearchServiceProvider> * _serviceProvider;
}

+ (id)sharedSearcherFactory;

- (void).cxx_destruct;
- (id)init;
- (id)initWithServiceProvider:(id)arg1;
- (id)makeSearcherForUserId:(id)arg1 prewarm:(bool)arg2;

@end
