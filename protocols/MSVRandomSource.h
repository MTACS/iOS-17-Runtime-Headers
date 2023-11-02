
@protocol MSVRandomSource <MSVRandom>

@required

- (NSData *)bytesWithLength:(long long)arg1;
- (NSMutableData *)mutableBytesWithLength:(long long)arg1;

@end
