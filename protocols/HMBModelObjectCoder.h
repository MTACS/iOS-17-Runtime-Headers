
@protocol HMBModelObjectCoder <NSObject>

@required

+ (id)hmbDecodeData:(NSData *)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3;

- (NSData *)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2;

@end
