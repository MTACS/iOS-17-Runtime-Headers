
@interface KVProfileReaderFactory : NSObject <KVProfileReaderProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)profileReaderForData:(id)arg1 error:(id*)arg2;

@end
