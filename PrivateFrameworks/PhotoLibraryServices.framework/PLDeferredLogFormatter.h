
@interface PLDeferredLogFormatter : NSObject {
    NSMutableArray * _entries;
}

+ (id)_entityDescriptionForContext:(long long)arg1;
+ (bool)_isManagedObjectPointerForContext:(long long)arg1;
+ (id)_logTypeForContext:(long long)arg1;
+ (id)_serializableDictionaryForEntry:(id)arg1;

- (void).cxx_destruct;
- (id)_JSONStringPretty:(bool)arg1;
- (id)_formattedStringForPrinting;
- (id)_plistString;
- (void)addLogWithContext:(long long)arg1 timestamp:(double)arg2 pointer:(unsigned long long)arg3;
- (void)clear;
- (id)init;
- (id)stringWithFormat:(long long)arg1;

@end
