
@interface HDSyncRequester : NSObject {
    HDProfile * _profile;
    id /* block */  _unitTesting_willRequestSyncsHandler;
}

@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, copy) id /* block */ unitTesting_willRequestSyncsHandler;

- (void).cxx_destruct;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)profile;
- (void)requestSyncsWithReason:(id)arg1;
- (void)requestSyncsWithReason:(id)arg1 options:(unsigned long long)arg2;
- (void)setUnitTesting_willRequestSyncsHandler:(id /* block */)arg1;
- (id /* block */)unitTesting_willRequestSyncsHandler;

@end
