
@interface SBHIconLayoutHidingAssertion : NSObject <BSDescriptionProviding, SBHIconLayoutHidingUpdating> {
    <SBHIconLayoutHidingAssertionDelegate> * _delegate;
    NSMutableSet * _icons;
    bool  _invalidated;
    unsigned long long  _options;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHIconLayoutHidingAssertionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long folderMutationOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *icons;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, readonly) unsigned long long listMutationOptions;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addIcon:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)folderMutationOptions;
- (id)icons;
- (id)initWithDelegate:(id)arg1 icons:(id)arg2 reason:(id)arg3 options:(unsigned long long)arg4;
- (void)invalidate;
- (bool)isInvalidated;
- (unsigned long long)listMutationOptions;
- (unsigned long long)options;
- (id)reason;
- (bool)referencesIcon:(id)arg1;
- (bool)referencesIconInListModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
