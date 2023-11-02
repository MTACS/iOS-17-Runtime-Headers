
@interface GDEntityTaggingService : NSObject {
    GDEntityTaggingServiceInner * inner;
}

- (void).cxx_destruct;
- (id)entitiesForTag:(long long)arg1 options:(id)arg2 error:(id*)arg3;
- (id)entityTagsForIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)initWithConfig:(id)arg1 error:(id*)arg2;
- (void)recordDirectFeedbackWithGradedTrue:(id)arg1 gradedFalse:(id)arg2 ignored:(id)arg3 neverPresented:(id)arg4 error:(id*)arg5;
- (void)recordStatefulFeedback:(id)arg1 error:(id*)arg2;

@end
