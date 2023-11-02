
@interface CKDSWritableStorage : CKDSStorage

@property (nonatomic, readonly) NSMutableData *data;

- (id)initInMemory;
- (id)initWithFileURL:(id)arg1;
- (id)initWithTemporaryFile:(id*)arg1;
- (id)readableStorage;

@end
