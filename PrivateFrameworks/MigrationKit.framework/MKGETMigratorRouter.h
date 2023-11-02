
@interface MKGETMigratorRouter : NSObject <MKHTTPRouter> {
    NSHashTable * _migrators;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSHashTable *migrators;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)keyFromMigratorType:(long long)arg1;
- (id)migrators;
- (void)server:(id)arg1 didReceiveRequest:(id)arg2 response:(id)arg3;
- (void)setMigrators:(id)arg1;

@end
