
@protocol DVTOutputStream

@required

- (id)createNextStream:(id*)arg1;
- (bool)hasSpace;
- (long long)write:(NSData *)arg1 error:(id*)arg2;

@end
