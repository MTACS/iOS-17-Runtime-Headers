
@interface PTPixelBufferUtil : NSObject

+ (bool)_getPixelFormatsForType:(unsigned int)arg1 luma:(unsigned long long*)arg2 chroma:(unsigned long long*)arg3;
+ (unsigned int)getCVPixelBufferGetPixelFormatType:(unsigned long long)arg1;
+ (id)getMTLTextureDescriptor:(struct __CVBuffer { }*)arg1 device:(id)arg2;
+ (id)getMTLTextureFromPixelBuffer:(struct __CVBuffer { }*)arg1 device:(id)arg2;
+ (id)getMTLTextureFromPixelBuffer:(struct __CVBuffer { }*)arg1 device:(id)arg2 sRGB:(bool)arg3;
+ (bool)getMetalLumaAndChromaFormats:(struct __CVBuffer { }*)arg1 luma:(unsigned long long*)arg2 chroma:(unsigned long long*)arg3;
+ (unsigned long long)getNoConcurrentAccessHint:(struct __CVBuffer { }*)arg1;
+ (bool)isCompressed:(struct __CVBuffer { }*)arg1;
+ (bool)isPixelBuffer10Bit:(struct __CVBuffer { }*)arg1;
+ (bool)isPixelBufferVideoRange:(struct __CVBuffer { }*)arg1;
+ (void)logPixelbufferMetadataForPixelBuffer:(struct __CVBuffer { }*)arg1 name:(id)arg2;
+ (unsigned int)pixelBufferToLumaChroma:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 outLuma:(id*)arg3 outChroma:(id*)arg4 read:(bool)arg5 write:(bool)arg6;

@end
