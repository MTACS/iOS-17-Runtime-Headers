
@interface _GCHapticSyntheticCommand : NSObject {
    unsigned long long  _channelOrSeqID;
    unsigned long long  _identifier;
    _GCHapticParameterCurve * _parameterCurve;
    unsigned long long  _serverID;
    double  _time;
    _GCHapticTokenAndParams * _tokenAndParams;
    unsigned short  _type;
    float  _value;
}

@property (nonatomic, readonly) unsigned long long channelID;
@property (nonatomic, readonly) unsigned short command;
@property (nonatomic, readonly) unsigned long long eventID;
@property (nonatomic, readonly) unsigned long long paramID;
@property (nonatomic, readonly) _GCHapticParameterCurve *parameterCurve;
@property (nonatomic, readonly) unsigned long long sequenceID;
@property (nonatomic, readonly) unsigned long long serverID;
@property (nonatomic, readonly) double time;
@property (nonatomic, readonly) _GCHapticTokenAndParams *tokenAndParams;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) float value;

- (void).cxx_destruct;
- (void)cancel;
- (unsigned long long)channelID;
- (unsigned short)command;
- (id)description;
- (unsigned long long)eventID;
- (id)initWithHapticCommand:(const void*)arg1;
- (unsigned long long)paramID;
- (id)parameterCurve;
- (void)preprocessCommand:(const void*)arg1;
- (unsigned long long)sequenceID;
- (unsigned long long)serverID;
- (double)time;
- (id)tokenAndParams;
- (unsigned short)type;
- (float)value;

@end
