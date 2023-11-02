
@interface VNRPyramid : NSObject {
    NSArray * _chromaLevels;
    NSArray * _lumaLevels;
}

@property (readonly) NSArray *chromaLevels;
@property (readonly) NSArray *lumaLevels;

- (void).cxx_destruct;
- (id)chromaLevels;
- (id)initWithMetalDevice:(id)arg1 isForDeghosting:(bool)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 nLumaLevels:(unsigned long long)arg5 nChromaLevels:(unsigned long long)arg6 lumaStartingLevel:(unsigned long long)arg7 chromaStartingLevel:(unsigned long long)arg8;
- (id)lumaLevels;

@end
