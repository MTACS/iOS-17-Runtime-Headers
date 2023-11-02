
@protocol DVTInputStream <NSObject>

@required

- (bool)hasData;
- (NSData *)peek:(unsigned long long)arg1 error:(id*)arg2;
- (NSData *)read:(unsigned long long)arg1 error:(id*)arg2;
- (bool)supportsPeek;

@end
