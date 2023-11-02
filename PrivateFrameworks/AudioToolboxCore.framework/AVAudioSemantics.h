
@interface AVAudioSemantics : NSObject <NSSecureCoding> {
    NSArray * _channelGroups;
}

@property (nonatomic, copy) NSArray *channelGroups;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)channelGroups;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAudioSemantics:(struct __CFArray { }*)arg1;
- (id)initWithChannelGroups:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setChannelGroups:(id)arg1;

@end
