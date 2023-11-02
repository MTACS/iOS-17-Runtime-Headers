
@interface ANProcessAudio : NSObject

+ (id)_ANAudioEffectToName:(unsigned long long)arg1;
+ (bool)_configureEngine:(id)arg1 player:(id)arg2 effect:(id)arg3 sourceFile:(id)arg4 error:(id*)arg5;
+ (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })_lookupComponent:(unsigned long long)arg1;
+ (id)_lookupTunings:(unsigned long long)arg1;
+ (bool)_renderAudioTo:(id)arg1 length:(long long)arg2 engine:(id)arg3 error:(id*)arg4;
+ (bool)process:(id)arg1 to:(id)arg2 withOptions:(unsigned long long)arg3 error:(id*)arg4;

@end
