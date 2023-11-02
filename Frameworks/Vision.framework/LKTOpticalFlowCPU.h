
@interface LKTOpticalFlowCPU : LKTOpticalFlow {
    struct unique_ptr<apple::vision::OpticalFlow::LKTCPU, std::default_delete<apple::vision::OpticalFlow::LKTCPU>> { 
        struct __compressed_pair<apple::vision::OpticalFlow::LKTCPU *, std::default_delete<apple::vision::OpticalFlow::LKTCPU>> { 
            struct LKTCPU {} *__value_; 
        } __ptr_; 
    }  _opticalFlow;
    struct __CVBuffer { } * _uv_user_ref;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)estimateFlowFromReference:(struct __CVBuffer { }*)arg1 target:(struct __CVBuffer { }*)arg2 error:(id*)arg3;
- (bool)estimateFlowStream:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (id)initWithWidth:(int)arg1 height:(int)arg2 numScales:(int)arg3;
- (bool)setOutputUV:(struct __CVBuffer { }*)arg1 error:(id*)arg2;

@end
