
@interface KVProfileWriterFactory : NSObject <KVProfileWriterProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)profileWriterForFormat:(unsigned char)arg1 outputStream:(id)arg2 error:(id*)arg3;

@end
