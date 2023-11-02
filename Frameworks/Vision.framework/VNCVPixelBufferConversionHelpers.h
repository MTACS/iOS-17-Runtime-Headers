
@interface VNCVPixelBufferConversionHelpers : NSObject

+ (unsigned long long)computeHashForCVPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (struct __CVBuffer { }*)createCVPixelBufferRefFromDictionaryRepresentation:(id)arg1;
+ (id)createDictionaryRepresentationOfCVPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (id)dictionaryRepresentationClassesSet;
+ (bool)isCVPixelBuffer:(struct __CVBuffer { }*)arg1 equalToCVPixelBuffer:(struct __CVBuffer { }*)arg2;

@end
