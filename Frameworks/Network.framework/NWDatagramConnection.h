
@interface NWDatagramConnection : NWConnection

+ (id)connectionWithConnectedSocket:(int)arg1;

- (bool)readDatagramsWithMinimumCount:(unsigned long long)arg1 maximumCount:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)writeDatagrams:(id)arg1 completionHandler:(id /* block */)arg2;

@end
