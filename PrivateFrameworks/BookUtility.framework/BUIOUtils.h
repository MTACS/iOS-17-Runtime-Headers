
@interface BUIOUtils : NSObject

+ (struct CGDataProvider { }*)newCGDataProviderForInputStream:(id)arg1;
+ (struct CGDataProvider { }*)newCGDataProviderForReadChannel:(id)arg1;
+ (void)readAllFromChannel:(id)arg1 offset:(long long)arg2 length:(unsigned long long)arg3 completion:(id /* block */)arg4;

@end
