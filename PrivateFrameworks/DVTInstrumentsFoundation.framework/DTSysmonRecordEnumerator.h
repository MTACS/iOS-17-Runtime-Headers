
@interface DTSysmonRecordEnumerator : NSObject {
    unsigned long long  _heartbeatTime;
    DTSysmonTapRecordDecoder * _recordDecoder;
    NSArray * _samples;
}

@property (nonatomic, retain) DTSysmonTapRecordDecoder *recordDecoder;
@property (nonatomic, retain) NSArray *samples;

- (void).cxx_destruct;
- (unsigned long long)enumerateRecordsWithBlock:(id /* block */)arg1;
- (id)initWithHeartbeatTime:(unsigned long long)arg1;
- (id)recordDecoder;
- (id)samples;
- (void)setRecordDecoder:(id)arg1;
- (void)setSamples:(id)arg1;

@end
