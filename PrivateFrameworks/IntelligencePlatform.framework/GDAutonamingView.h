
@interface GDAutonamingView : NSObject {
    GDAutonamingViewInner * _inner;
}

- (void).cxx_destruct;
- (void)confirmWithIdentifier:(id)arg1 ofType:(id)arg2 person:(id)arg3;
- (void)confirmWithIdentifier:(id)arg1 ofType:(id)arg2 person:(id)arg3 confirmationType:(long long)arg4;
- (void)confirmWithIdentifier:(id)arg1 person:(id)arg2 confirmationType:(long long)arg3;
- (void)didUpdateUserFeedback;
- (id)initWithInner:(id)arg1;
- (id)initWithViewName:(id)arg1 error:(id*)arg2;
- (id)personForIdentifier:(id)arg1;
- (id)personForIdentifier:(id)arg1 ofType:(id)arg2;
- (void)rejectWithIdentifier:(id)arg1 ofType:(id)arg2 person:(id)arg3;
- (void)rejectWithIdentifier:(id)arg1 ofType:(id)arg2 person:(id)arg3 confirmationType:(long long)arg4;
- (void)rejectWithIdentifier:(id)arg1 person:(id)arg2 confirmationType:(long long)arg3;
- (void)reset;

@end
