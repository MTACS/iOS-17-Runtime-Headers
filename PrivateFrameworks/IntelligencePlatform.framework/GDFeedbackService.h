
@interface GDFeedbackService : NSObject {
    GDFeedbackServiceInner * _inner;
}

- (void).cxx_destruct;
- (id)init;
- (bool)recordFeedback:(id)arg1 error:(id*)arg2;
- (bool)recordFeedback:(id)arg1 forEvent:(long long)arg2 error:(id*)arg3;

@end
