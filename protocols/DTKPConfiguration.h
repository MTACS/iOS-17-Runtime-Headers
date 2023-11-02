
@protocol DTKPConfiguration <NSObject>

@required

- (NSError *)apply;
- (unsigned long long)bufferSize;
- (unsigned char)collectionMode;
- (unsigned int)enabledKPCClasses;
- (NSData *)generateConfigWords;
- (bool)hasEnabledKPCClasses;
- (NSError *)reset;
- (void)setBufferSize:(unsigned long long)arg1;
- (void)setCollectionMode:(unsigned char)arg1;
- (NSArray *)triggers;

@end
