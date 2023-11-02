
@interface MRSendVoiceInputMessage : MRProtocolMessage {
    MRAudioDataBlock * _dataBlock;
}

@property (nonatomic, readonly) MRAudioBuffer *buffer;
@property (nonatomic, readonly) float gain;
@property (nonatomic, readonly) struct { double x1; double x2; } time;

- (void).cxx_destruct;
- (void)_initializeDataIfNecessary;
- (id)buffer;
- (float)gain;
- (id)initWithBuffer:(id)arg1 time:(struct { double x1; double x2; })arg2 gain:(float)arg3;
- (struct { double x1; double x2; })time;
- (unsigned long long)type;

@end
