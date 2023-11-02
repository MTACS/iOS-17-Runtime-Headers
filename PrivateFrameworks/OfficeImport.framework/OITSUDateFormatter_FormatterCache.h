
@interface OITSUDateFormatter_FormatterCache : NSObject {
    NSMutableDictionary * _dateFormatterCache;
    NSLock * _dateFormatterCacheLock;
}

+ (id)dateFormatterStringFromDate:(id)arg1 withFormat:(id)arg2 locale:(id)arg3;

- (void).cxx_destruct;
- (id)dateFormatterStringFromDate:(id)arg1 withFormat:(id)arg2 locale:(id)arg3;
- (id)init;

@end
