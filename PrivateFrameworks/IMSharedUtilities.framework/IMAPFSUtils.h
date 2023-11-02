
@interface IMAPFSUtils : NSObject

+ (unsigned long long)purgableFlagsForPath:(id)arg1 error:(int*)arg2;
+ (id)stringForPurgableFlags:(unsigned long long)arg1;

@end
