
@interface SBIconModelPropertyListFileStore : NSObject <BSDescriptionProviding, SBIconModelStore> {
    NSURL * _currentIconStateURL;
    NSURL * _desiredIconStateURL;
}

@property (nonatomic, readonly, copy) NSURL *currentIconStateURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *desiredIconStateURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_delete:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)_load:(id)arg1 error:(id*)arg2;
- (bool)_save:(id)arg1 url:(id)arg2 error:(id*)arg3;
- (id)currentIconStateURL;
- (bool)deleteCurrentIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (bool)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)desiredIconStateURL;
- (id)init;
- (id)initWithIconStateURL:(id)arg1 desiredIconStateURL:(id)arg2;
- (id)loadCurrentIconState:(id*)arg1;
- (id)loadDesiredIconState:(id*)arg1;
- (bool)saveCurrentIconState:(id)arg1 error:(id*)arg2;
- (bool)saveDesiredIconState:(id)arg1 error:(id*)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
