
@interface DTKTraceTapMemo : DTTapDataMemo {
    <DVTInputStream> * _datastream;
    bool  _isRawKtraceFile;
    bool  _isSession;
    NSObject<OS_xpc_object> * _stackshot;
    unsigned int  _triggerCount;
    NSData * _triggerIDs;
}

@property (nonatomic, retain) <DVTInputStream> *datastream;
@property (nonatomic) bool isRawKtraceFile;
@property (nonatomic) bool isSession;
@property (nonatomic, retain) NSObject<OS_xpc_object> *stackshot;
@property (nonatomic) unsigned int triggerCount;
@property (nonatomic, retain) NSData *triggerIDs;

- (void).cxx_destruct;
- (id)datastream;
- (bool)isRawKtraceFile;
- (bool)isSession;
- (void)setDatastream:(id)arg1;
- (void)setIsRawKtraceFile:(bool)arg1;
- (void)setIsSession:(bool)arg1;
- (void)setStackshot:(id)arg1;
- (void)setTriggerCount:(unsigned int)arg1;
- (void)setTriggerIDs:(id)arg1;
- (id)stackshot;
- (unsigned int)triggerCount;
- (id)triggerIDs;

@end
