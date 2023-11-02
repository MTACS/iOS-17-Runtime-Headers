
@interface PLPTPConversionResult : NSObject {
    unsigned long long  _estimatedFileLength;
    UTType * _inputContentType;
    unsigned int  _inputVideoCodec;
    UTType * _outputContentType;
    unsigned int  _outputVideoCodec;
    NSString * _pathExtension;
    bool  _requiresConversion;
}

@property (readonly) unsigned long long estimatedFileLength;
@property (readonly) UTType *inputContentType;
@property (readonly) unsigned int inputVideoCodec;
@property (readonly) UTType *outputContentType;
@property (readonly) unsigned int outputVideoCodec;
@property (readonly, copy) NSString *pathExtension;
@property (readonly) bool requiresConversion;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)estimatedFileLength;
- (id)initWithRequiresConversion:(bool)arg1 pathExtension:(id)arg2 estimatedFileLength:(unsigned long long)arg3 inputVideoCodec:(unsigned int)arg4 inputContentType:(id)arg5 outputVideoCodec:(unsigned int)arg6 outputContentType:(id)arg7;
- (id)inputContentType;
- (unsigned int)inputVideoCodec;
- (id)outputContentType;
- (unsigned int)outputVideoCodec;
- (id)pathExtension;
- (bool)requiresConversion;

@end
