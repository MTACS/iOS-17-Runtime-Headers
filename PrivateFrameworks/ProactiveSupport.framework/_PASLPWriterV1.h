
@interface _PASLPWriterV1 : NSObject

+ (id)dataWithPropertyList:(id)arg1 error:(id*)arg2;
+ (id)fileBackedDataWithPropertyList:(id)arg1 appendedToFd:(int)arg2 startOfs:(long long*)arg3 error:(id*)arg4;
+ (id)fileBackedDataWithPropertyList:(id)arg1 writtenToPath:(id)arg2 error:(id*)arg3;

- (id)init;

@end
