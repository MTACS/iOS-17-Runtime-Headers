
@interface _CSVisualizer : NSObject <NSCopying> {
    NSMutableDictionary * _functions;
    NSRecursiveLock * _lock;
    struct __CSStore { } * _store;
    NSMutableDictionary * _userInfo;
}

@property (readonly) struct __CSStore { }*store;
@property (readonly) NSMutableDictionary *userInfo;

+ (id)URLForUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;
+ (void)breakDownTable:(const struct Table { struct Unit { unsigned int x_1_1_1 : 30; unsigned int x_1_1_2 : 2; unsigned int x_1_1_3; BOOL x_1_1_4[0]; } x1; BOOL x2[48]; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; }*)arg1 inStore:(const void*)arg2 buffer:(char *)arg3;
+ (void)enumerateReferencesToUnitsInUnitDescription:(id)arg1 block:(id /* block */)arg2;
+ (void)enumerateValuesForTitlesInDescription:(id)arg1 block:(id /* block */)arg2;
+ (bool)getUnit:(unsigned int*)arg1 inTable:(unsigned int*)arg2 fromURL:(id)arg3;
+ (id)new;
+ (id)predicateForSearchingDescriptionWithString:(id)arg1 error:(id*)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfValueForTitle:(id)arg1 inDescription:(id)arg2;
+ (bool)unitDescription:(id)arg1 referencesUnit:(unsigned int)arg2 inTable:(unsigned int)arg3;

- (void).cxx_destruct;
- (id)breakDownUsage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)descriptionOfUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;
- (void)enumerateReferencesToUnit:(unsigned int)arg1 inTable:(unsigned int)arg2 block:(id /* block */)arg3;
- (id)functionsForTable:(unsigned int)arg1;
- (id)functionsForTableNoCopy:(unsigned int)arg1;
- (id /* block */)handlerForTable:(unsigned int)arg1;
- (id)init;
- (id)initWithStore:(struct __CSStore { }*)arg1;
- (id)initWithStore:(struct __CSStore { }*)arg1 useStandardTableFunctions:(bool)arg2;
- (id)initWithStore:(struct __CSStore { }*)arg1 useStandardTableHandlers:(bool)arg2;
- (void)setFunctions:(id)arg1 forTable:(unsigned int)arg2;
- (void)setHandler:(id /* block */)arg1 forTable:(unsigned int)arg2;
- (void)setStandardTableFunctions;
- (void)setStandardTableHandlers;
- (struct __CSStore { }*)store;
- (id)summaryOfUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;
- (id)userInfo;

@end
