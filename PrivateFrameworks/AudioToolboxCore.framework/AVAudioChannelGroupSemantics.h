
@interface AVAudioChannelGroupSemantics : NSObject <NSSecureCoding> {
    unsigned int  _channelCount;
    AVAudioChannelLayout * _layout;
    unsigned int  _semantics;
    unsigned int  _terminalType;
}

@property (nonatomic) unsigned int channelCount;
@property (nonatomic, copy) AVAudioChannelLayout *layout;
@property (nonatomic) unsigned int semantics;
@property (nonatomic) unsigned int terminalType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)channelCount;
- (struct AudioChannelGroupSemantics { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelLayout { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; struct AudioChannelDescription { unsigned int x_4_2_1; unsigned int x_4_2_2; float x_4_2_3[3]; } x_4_1_4[1]; } x4; }*)createAudioChannelGroupSemantics;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAudioChannelGroupSemantics:(const struct AudioChannelGroupSemantics { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelLayout { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; struct AudioChannelDescription { unsigned int x_4_2_1; unsigned int x_4_2_2; float x_4_2_3[3]; } x_4_1_4[1]; } x4; }*)arg1;
- (id)initWithChannelCount:(unsigned int)arg1 semantics:(unsigned int)arg2 terminalType:(unsigned int)arg3 layout:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)layout;
- (unsigned int)semantics;
- (void)setChannelCount:(unsigned int)arg1;
- (void)setLayout:(id)arg1;
- (void)setSemantics:(unsigned int)arg1;
- (void)setTerminalType:(unsigned int)arg1;
- (unsigned int)terminalType;

@end
