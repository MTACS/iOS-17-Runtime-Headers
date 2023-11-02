
@interface AVAudioUnit : AVAudioNode

@property (nonatomic, readonly) AUAudioUnit *AUAudioUnit;
@property (nonatomic, readonly) struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } audioComponentDescription;
@property (nonatomic, readonly) struct OpaqueAudioComponentInstance { }*audioUnit;
@property (nonatomic, readonly) NSString *manufacturerName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long version;

// Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio

+ (void)instantiateWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;

- (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })audioComponentDescription;
- (struct OpaqueAudioComponentInstance { }*)audioUnit;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (bool)loadAudioUnitPresetAtURL:(id)arg1 error:(id*)arg2;
- (id)manufacturerName;
- (id)name;
- (bool)setValue:(float)arg1 forParam:(unsigned int)arg2;
- (float)valueForParam:(unsigned int)arg1;
- (unsigned long long)version;

// Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

+ (int)renderErrorFromAU:(struct OpaqueAudioComponentInstance { }*)arg1;

- (int)lastRenderError;

@end
