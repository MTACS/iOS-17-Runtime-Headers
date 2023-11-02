
@interface AXMSoundOutputAction : AXMOutputAction {
    NSURL * _soundFileURL;
    NSString * _soundID;
}

@property (nonatomic, readonly) NSURL *soundFileURL;
@property (nonatomic, readonly) NSString *soundID;

+ (id)_soundFileURLForSoundID:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithSoundID:(id)arg1 handle:(id)arg2;
- (id)_initWithURL:(id)arg1 handle:(id)arg2;
- (id)initWithSoundID:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)soundFileURL;
- (id)soundID;

@end
