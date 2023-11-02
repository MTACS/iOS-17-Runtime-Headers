
@protocol SFUZipArchiveDataRepresentation <NSObject>

@required

- (<SFUBufferedInputStream> *)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (<SFUInputStream> *)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;

@end
