
@interface APRequirements : NSObject

+ (bool)_buildErrorWithCode:(long long)arg1 message:(id)arg2 returningError:(id*)arg3;
+ (bool)_testForFileSystemReturningError:(id*)arg1;
+ (unsigned long long)failForRequirements;
+ (bool)hasRequirements:(unsigned long long)arg1 error:(id*)arg2;
+ (void)setFailForRequirements:(unsigned long long)arg1;

@end
