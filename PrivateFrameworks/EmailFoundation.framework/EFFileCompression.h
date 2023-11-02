
@interface EFFileCompression : NSObject <EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_compressFile:(const char *)arg1 error:(id*)arg2;
+ (id)_compressionLock;
+ (struct CompressionQueueContext_s { }*)_compressionQueueContext;
+ (bool)_doCompressFile:(const char *)arg1 errorCode:(long long*)arg2;
+ (bool)compressDirectory:(id)arg1 shouldCancel:(id /* block */)arg2 error:(id*)arg3;
+ (bool)compressFile:(id)arg1 error:(id*)arg2;
+ (id)log;

@end
