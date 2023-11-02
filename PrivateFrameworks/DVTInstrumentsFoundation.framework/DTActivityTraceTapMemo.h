
@interface DTActivityTraceTapMemo : DTTapDataMemo {
    NSData * _data;
    unsigned long long  _lastMachContinuousTimeSeen;
    DTXMessage * _message;
}

@property (nonatomic) unsigned long long lastMachContinuousTimeSeen;

- (void).cxx_destruct;
- (const void*)getBufferWithLength:(unsigned long long*)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (unsigned long long)lastMachContinuousTimeSeen;
- (void)setLastMachContinuousTimeSeen:(unsigned long long)arg1;

@end
