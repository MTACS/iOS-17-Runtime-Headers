
@interface MLRTrialTaskResult : NSObject {
    NSDictionary * _JSONResult;
}

@property (nonatomic, readonly) NSDictionary *JSONResult;

- (void).cxx_destruct;
- (id)JSONResult;
- (id)description;
- (id)initWithJSONResult:(id)arg1;
- (bool)submitForTask:(id)arg1 error:(id*)arg2;

@end
