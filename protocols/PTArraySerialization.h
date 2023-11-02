
@protocol PTArraySerialization <NSObject>

@required

+ (NSArray *)objectsFromAtomStream:(PTAtomStream *)arg1;
+ (unsigned long long)sizeOfSerializedArray:(NSArray *)arg1 options:(NSDictionary *)arg2;
+ (bool)writeArray:(NSArray *)arg1 toAtomWriter:(PTAtomWriter *)arg2 options:(NSDictionary *)arg3;

@end
