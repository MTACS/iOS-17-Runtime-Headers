
@interface SKAudioNode : SKNode <NSSecureCoding> {
    bool  _autoplayLooped;
    bool  _positional;
    void * _skcAudioNode;
}

@property (nonatomic) bool autoplayLooped;
@property (nonatomic, retain) AVAudioNode *avAudioNode;
@property (getter=isPositional, nonatomic) bool positional;

+ (id)_audioURLWithName:(id)arg1 bundle:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)_connectToScene:(id)arg1;
- (void)_didMakeBackingNode;
- (void*)_makeBackingNode;
- (void)_playLooped;
- (void)_setAudioName:(id)arg1 bundle:(id)arg2;
- (id)audioFile;
- (id)audioFileName;
- (id)audioURL;
- (bool)autoplayLooped;
- (id)avAudioNode;
- (void)commonInit;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAVAudioNode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileNamed:(id)arg1;
- (id)initWithFileNamed:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (bool)isEqualToNode:(id)arg1;
- (bool)isPositional;
- (void)setAudioFileName:(id)arg1;
- (void)setAudioURL:(id)arg1;
- (void)setAutoplayLooped:(bool)arg1;
- (void)setAvAudioNode:(id)arg1;
- (void)setPositional:(bool)arg1;

@end
