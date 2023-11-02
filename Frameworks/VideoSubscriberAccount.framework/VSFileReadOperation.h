
@interface VSFileReadOperation : VSAsyncOperation {
    VSOptional * _result;
    NSURL * _source;
}

@property (nonatomic, retain) VSOptional *result;
@property (nonatomic, copy) NSURL *source;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;
- (id)result;
- (void)setResult:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
