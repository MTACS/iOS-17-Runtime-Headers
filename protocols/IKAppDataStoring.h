
@protocol IKAppDataStoring <NSObject>

@required

- (void)clear;
- (unsigned long long)count;
- (NSString *)getDataForKey:(NSString *)arg1;
- (NSString *)keyAtIndex:(unsigned long long)arg1;
- (void)removeDataForKey:(NSString *)arg1;
- (unsigned long long)setData:(NSString *)arg1 forKey:(NSString *)arg2;

@optional

- (NSDictionary *)dictionaryRepresentation;

@end
