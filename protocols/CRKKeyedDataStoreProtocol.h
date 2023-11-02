
@protocol CRKKeyedDataStoreProtocol <NSObject>

@required

- (NSData *)dataForKey:(NSString *)arg1 error:(id*)arg2;
- (bool)removeAllDataWithError:(id*)arg1;
- (bool)removeDataForKey:(NSString *)arg1 error:(id*)arg2;
- (bool)setData:(NSData *)arg1 forKey:(NSString *)arg2 error:(id*)arg3;

@end
