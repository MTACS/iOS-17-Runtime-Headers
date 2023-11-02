
@interface CVNLPVideoCaptioningModel : NSObject {
    struct shared_ptr<cvnlp::vidcap::VideoCaptioningModel> { 
        struct VideoCaptioningModel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _model;
    NSDictionary * _options;
}

@property (nonatomic, readonly) struct shared_ptr<cvnlp::vidcap::VideoCaptioningModel> { struct VideoCaptioningModel {} *x1; struct __shared_weak_count {} *x2; } model;
@property (nonatomic, readonly) NSDictionary *options;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)generateCaption:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (struct shared_ptr<cvnlp::vidcap::VideoCaptioningModel> { struct VideoCaptioningModel {} *x1; struct __shared_weak_count {} *x2; })model;
- (id)options;

@end
