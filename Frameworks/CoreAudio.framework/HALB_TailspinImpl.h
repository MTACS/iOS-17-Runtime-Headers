
@interface HALB_TailspinImpl : NSObject

+ (bool)dumpTailspinSync:(unsigned long long)arg1 forReason:(id)arg2;
+ (bool)enableTailspinSync;
+ (id)initOptionsDictionary;
+ (void)prepareDumpOptions:(unsigned long long)arg1 outDict:(id*)arg2;

@end
