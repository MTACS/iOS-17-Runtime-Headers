
@protocol NFNdefMessage <NSObject>

@required

- (void)addRecord:(id <NFNdefRecord>)arg1;
- (void)addRecordArray:(NSArray *)arg1;
- (NSData *)asData;
- (NSString *)decode;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initWithNDEFMessage:(id <NFNdefMessage>)arg1;
- (NSArray *)records;

@end
