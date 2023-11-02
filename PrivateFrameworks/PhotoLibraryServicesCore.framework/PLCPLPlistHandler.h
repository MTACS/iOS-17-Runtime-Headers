
@interface PLCPLPlistHandler : NSObject

+ (bool)CPLPlistFileExistsWithPathManager:(id)arg1;
+ (id)_cplPlistURLWithPathManager:(id)arg1 verb:(id)arg2;
+ (id)_readCPLPlistWithPathManager:(id)arg1;
+ (void)deleteCPLPlistWithPathManager:(id)arg1;
+ (void)initialize;
+ (id)readCPLPlistObjectWithKey:(id)arg1 pathManager:(id)arg2;
+ (void)saveCPLPlistObject:(id)arg1 forKey:(id)arg2 pathManager:(id)arg3;

@end
