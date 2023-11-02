
@interface CSUDetectionPrintNetwork : NSObject {
    CSUDetectionPrintNetworkConfiguration * _configuration;
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { 
        struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { 
            struct EspressoNet {} *__value_; 
        } __ptr_; 
    }  _net;
    struct unique_ptr<ik::PixelBufferTransfer, std::default_delete<ik::PixelBufferTransfer>> { 
        struct __compressed_pair<ik::PixelBufferTransfer *, std::default_delete<ik::PixelBufferTransfer>> { 
            struct PixelBufferTransfer {} *__value_; 
        } __ptr_; 
    }  _transferSession;
}

@property (nonatomic, readonly) CSUDetectionPrintNetworkConfiguration *configuration;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_unsafeRunOnInputImage:(struct __CVBuffer { }*)arg1 completion:(id /* block */)arg2;
- (id)configuration;
- (id)initWithConfiguration:(id)arg1;
- (bool)loadResourcesAndReturnError:(id*)arg1;
- (bool)resampleImage:(struct __CVBuffer { }*)arg1 intoInputImage:(struct __CVBuffer { }*)arg2 error:(id*)arg3;
- (void)runOnInputImage:(struct __CVBuffer { }*)arg1 completion:(id /* block */)arg2;

@end
