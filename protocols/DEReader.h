
@protocol DEReader <DECloser>

@required

- (NSData *)readData;
- (NSData *)readDataOfLength:(unsigned long long)arg1;

@end
