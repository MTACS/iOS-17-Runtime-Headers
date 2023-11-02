
@interface FTMSRScaler : NSObject <FTScaling> {
    struct unique_ptr<ik::MemoryScalerRotator, std::default_delete<ik::MemoryScalerRotator>> { 
        struct __compressed_pair<ik::MemoryScalerRotator *, std::default_delete<ik::MemoryScalerRotator>> { 
            struct MemoryScalerRotator {} *__value_; 
        } __ptr_; 
    }  _resampler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (bool)scaleSourceBuffer:(struct __CVBuffer { }*)arg1 toDestinationBuffer:(struct __CVBuffer { }*)arg2 sourceROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 destinationROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)scaleSourceBuffer:(struct __CVBuffer { }*)arg1 toDestinationBuffer:(struct __CVBuffer { }*)arg2 sourceROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 destinationROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 mean:(/* Warning: Unrecognized filer type: '9' using 'void*' */ void**)arg5;

@end
