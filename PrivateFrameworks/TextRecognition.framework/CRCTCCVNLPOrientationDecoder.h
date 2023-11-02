
@interface CRCTCCVNLPOrientationDecoder : NSObject <CRTextDecoding> {
    NSOrderedSet * _characterObservations;
    CRTextSequenceRecognizerModel * _model;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _spaceLabels;
}

@property (nonatomic, readonly) NSOrderedSet *characterObservations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CRTextSequenceRecognizerModel *model;
@property (nonatomic, readonly) bool shouldUseModernizedDecoder;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_buildActivationMatrices:(id)arg1;
- (struct vector<CoreRecognition::decoder::ActivationMatrix, std::allocator<CoreRecognition::decoder::ActivationMatrix>> { struct ActivationMatrix {} *x1; struct ActivationMatrix {} *x2; struct __compressed_pair<CoreRecognition::decoder::ActivationMatrix *, std::allocator<CoreRecognition::decoder::ActivationMatrix>> { struct ActivationMatrix {} *x_3_1_1; } x3; })_buildModernizedActivationMatrices:(id)arg1;
- (void)_create2DArraysFromInputArray:(id)arg1 classSize:(unsigned long long*)arg2 outputArrays:(void*)arg3;
- (bool)_decodeFeaturesWithInfo:(id)arg1 decoderCallback:(id /* block */)arg2 shouldDecodeScriptResult:(bool)arg3 shouldDecodeOrientationResult:(bool)arg4 shouldDecodeLayoutDirectionResult:(bool)arg5;
- (id)characterObservations;
- (bool)decodeOutput:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 error:(id*)arg3;
- (bool)decodeOutput:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 shouldDecodeScriptResult:(bool)arg3 shouldDecodeOrientationResult:(bool)arg4 shouldDecodeLayoutDirectionResult:(bool)arg5 error:(id*)arg6;
- (id)initWithConfiguration:(id)arg1 model:(id)arg2 error:(id*)arg3;
- (id)model;
- (void)setModel:(id)arg1;
- (bool)shouldDecodeWithLM;
- (bool)shouldUseModernizedDecoder;

@end
