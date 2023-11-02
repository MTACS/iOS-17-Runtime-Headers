
@interface CVNLPCLIPModel : NSObject {
    struct shared_ptr<cvnlp::clip::CLIPModel> { 
        struct CLIPModel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _model;
    NSString * _modelName;
    NSDictionary * _options;
}

@property (nonatomic, readonly) struct shared_ptr<cvnlp::clip::CLIPModel> { struct CLIPModel {} *x1; struct __shared_weak_count {} *x2; } model;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSDictionary *options;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)encodeImage:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (id)encodeText:(id)arg1 error:(id*)arg2;
- (id)encodeTextAverage:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (struct shared_ptr<cvnlp::clip::CLIPModel> { struct CLIPModel {} *x1; struct __shared_weak_count {} *x2; })model;
- (id)modelName;
- (id)options;

@end
