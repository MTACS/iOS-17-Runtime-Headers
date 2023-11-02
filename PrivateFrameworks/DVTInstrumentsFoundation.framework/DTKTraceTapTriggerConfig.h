
@interface DTKTraceTapTriggerConfig : NSObject {
    NSMutableDictionary * _dict;
    DTKPKDebugCodeSet * _kdebugFilterSet;
}

@property (nonatomic) unsigned long long callstackFrameDepth;
@property (nonatomic) unsigned long long eventLimitHint;
@property (nonatomic, readonly) bool hasThreadStateFilter;
@property (nonatomic) bool isAllProcesses;
@property (nonatomic, retain) DTKPKDebugCodeSet *kdebugFilter;
@property (nonatomic) int kind;
@property (nonatomic, retain) NSString *pmiCounterName;
@property (nonatomic, retain) NSArray *pmiDeviceIndices;
@property (nonatomic, retain) NSString *pmiEventMnemonic;
@property (nonatomic) unsigned long long pmiEventThreshold;
@property (nonatomic) unsigned long long sampleInterval;
@property (nonatomic, readonly, retain) NSString *uuid;

+ (id)deviceSignPostConfig;

- (void).cxx_destruct;
- (id)_GetTriggerDict;
- (void)_SetTriggerDict:(id)arg1;
- (void)addAction:(int)arg1;
- (unsigned long long)callstackFrameDepth;
- (void)enumerateActions:(id /* block */)arg1;
- (void)enumeratePIDsInFilter:(id /* block */)arg1;
- (void)enumerateThreadStatesToInclude:(id /* block */)arg1;
- (unsigned long long)eventLimitHint;
- (bool)hasThreadStateFilter;
- (void)includePID:(int)arg1;
- (void)includeThreadState:(unsigned int)arg1;
- (id)init;
- (id)initWithPlist:(id)arg1;
- (id)initWithUUIDString:(id)arg1;
- (bool)isAllProcesses;
- (id)kdebugFilter;
- (int)kind;
- (id)plist;
- (id)pmiCounterName;
- (id)pmiDeviceIndices;
- (id)pmiEventMnemonic;
- (unsigned long long)pmiEventThreshold;
- (unsigned long long)sampleInterval;
- (void)setCallstackFrameDepth:(unsigned long long)arg1;
- (void)setEventLimitHint:(unsigned long long)arg1;
- (void)setHasThreadStateFilter:(bool)arg1;
- (void)setIsAllProcesses:(bool)arg1;
- (void)setKdebugFilter:(id)arg1;
- (void)setKind:(int)arg1;
- (void)setPmiCounterName:(id)arg1;
- (void)setPmiDeviceIndices:(id)arg1;
- (void)setPmiEventMnemonic:(id)arg1;
- (void)setPmiEventThreshold:(unsigned long long)arg1;
- (void)setSampleInterval:(unsigned long long)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
