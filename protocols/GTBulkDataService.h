
@protocol GTBulkDataService

@required

- (void)downloadData:(void *)arg1 usingTransferOptions:(void *)arg2 chunkHandler:(void *)arg3; // needs 3 arg types, found 10: unsigned long long, GTBulkDataTransferOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, bool, NSError *, void*
- (unsigned long long)newUploadWithDescriptor:(GTBulkDataUploadDescriptor *)arg1 error:(id*)arg2;
- (bool)uploadChunk:(NSData *)arg1 forHandle:(unsigned long long)arg2 isFinalChunk:(bool)arg3 error:(id*)arg4;

@end
