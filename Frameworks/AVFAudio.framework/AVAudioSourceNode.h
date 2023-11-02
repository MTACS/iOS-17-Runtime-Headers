
@interface AVAudioSourceNode : AVAudioNode <AVAudioMixing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

+ (id /* block */)pullInputBlockFromRenderBlock:(id /* block */)arg1;

- (id)initWithFormat:(id)arg1 renderBlock:(id /* block */)arg2;
- (id)initWithRenderBlock:(id /* block */)arg1;

@end
