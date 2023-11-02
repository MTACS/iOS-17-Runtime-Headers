
@protocol UNSContentProtectionStrategy <NSObject>

@required

- (NSData *)dataAtPath:(NSString *)arg1;
- (bool)dataIsAvailableAtPath:(NSString *)arg1;
- (void)migrateDataAtPath:(NSString *)arg1 toPath:(NSString *)arg2;
- (bool)removeItemAtPath:(NSString *)arg1 error:(id*)arg2;
- (bool)writeData:(NSData *)arg1 atPath:(NSString *)arg2 error:(id*)arg3;

@optional

- (void)importDataWithImportHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSData *, id /* block */, NSData *, NSData *, void*

@end
