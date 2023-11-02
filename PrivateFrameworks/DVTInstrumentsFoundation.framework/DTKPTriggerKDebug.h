
@interface DTKPTriggerKDebug : DTKPTrigger {
    DTKPKDebugCodeSet * _codeSet;
    int  _filterMode;
}

@property (nonatomic, readonly, retain) DTKPKDebugCodeSet *codeSet;
@property (nonatomic) int filterMode;

- (void).cxx_destruct;
- (void)addCodeSet:(id)arg1;
- (void)clearCodeSet;
- (id)codeSet;
- (void)enableClass:(unsigned char)arg1;
- (void)enableClass:(unsigned char)arg1 subclass:(unsigned char)arg2;
- (void)enableClass:(unsigned char)arg1 subclass:(unsigned char)arg2 code:(unsigned int)arg3;
- (void)enableDebugID:(unsigned int)arg1;
- (int)filterMode;
- (id)initWithCounterAllocatorProvider:(id)arg1;
- (void)setFilterMode:(int)arg1;
- (int)start:(id*)arg1;
- (int)stop:(id*)arg1;
- (unsigned long long)triggerKind;

@end
