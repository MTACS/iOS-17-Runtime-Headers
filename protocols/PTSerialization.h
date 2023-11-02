
@protocol PTSerialization <NSObject>

@required

+ (id)objectFromAtomStream:(PTAtomStream *)arg1;
+ (void)registerForSerialization;

- (unsigned long long)sizeOfSerializedObjectWithOptions:(NSDictionary *)arg1;
- (bool)supportsVersion:(unsigned long long)arg1;
- (bool)writeToAtomWriter:(PTAtomWriter *)arg1 options:(NSDictionary *)arg2;

@end
