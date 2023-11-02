
@interface SoundAnalysis.SNLogMelSpectrogramCustomModelUtils : NSObject

+ (struct SNLogMelParameters { float x1; unsigned int x2; float x3; float x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; int x10; int x11; })defaultLogMelExtractionParameters;
+ (bool)overrideLogMelExtractionParameters:(struct SNLogMelParameters { float x1; unsigned int x2; float x3; float x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; int x10; int x11; }*)arg1 withContentsOfParameterDictionary:(id)arg2 error:(id*)arg3;
+ (bool)resetLogMelExtractionParameters:(struct SNLogMelParameters { float x1; unsigned int x2; float x3; float x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; int x10; int x11; }*)arg1 overrideWithParameterDictionary:(id)arg2 error:(id*)arg3;
+ (bool)validateModelDescription:(id)arg1 logMelExtractionParameters:(struct SNLogMelParameters { float x1; unsigned int x2; float x3; float x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; int x10; int x11; })arg2 withHandler:(id /* block */)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)init;

@end
