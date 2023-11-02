
@interface _LAKeyStoreGenericPasswordNull : NSObject <LAKeyStoreGenericPassword> {
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchDataWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)identifier;
- (id)init;

@end
