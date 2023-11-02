
@protocol HDRestorableIterator <HKIterator>

@required

- (NSData *)iteratorStateData;
- (bool)restoreIteratorStateFromData:(NSData *)arg1 error:(id*)arg2;

@end
