
@interface PHASEExternalStreamDebugInfo : NSObject <NSSecureCoding> {
    AVAudioFormat * _clientFormat;
    bool  _input;
    bool  _streamPaused;
}

@property (nonatomic, readonly) AVAudioFormat *clientFormat;
@property (getter=isInput, nonatomic, readonly) bool input;
@property (getter=isStreamPaused, nonatomic, readonly) bool streamPaused;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientFormat;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInput;
- (bool)isStreamPaused;
- (void)setClientFormat:(id)arg1;
- (void)setInput:(bool)arg1;
- (void)setStreamPaused:(bool)arg1;

@end
