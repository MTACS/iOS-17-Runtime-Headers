
@interface DTKPKDebugCodeSet : NSObject {
    NSMutableSet * _kdebugCodes;
}

@property (nonatomic, readonly, retain) NSMutableSet *kdebugCodes;

+ (void)releaseFilterMask:(char *)arg1;
+ (void)releaseKperfFilter:(struct kperf_kdebug_filter { }*)arg1;

- (void).cxx_destruct;
- (void)addClass:(unsigned int)arg1;
- (void)addClass:(unsigned int)arg1 subclassID:(unsigned int)arg2;
- (void)addClass:(unsigned int)arg1 subclassID:(unsigned int)arg2 code:(unsigned int)arg3;
- (void)addCodeSet:(id)arg1;
- (void)addCodes:(id)arg1;
- (bool)containsClass:(unsigned int)arg1;
- (bool)containsClass:(unsigned int)arg1 subclassID:(unsigned int)arg2;
- (void)convertLegacyCodes;
- (char *)createFilterMask:(bool)arg1;
- (struct kperf_kdebug_filter { }*)createKperfFilter;
- (id)description;
- (id)init;
- (id)initWithCodes:(id)arg1;
- (id)initWithLegacyCodes:(id)arg1;
- (id)kdebugCodes;
- (id)legacyXML;

@end
