
@interface _SBIconListViewDataDraggingContext : NSObject <BSDescriptionProviding> {
    bool  _allowsMoveOperation;
    NSString * _bestAvailableUTI;
    long long  _fileOptions;
    SBIconView * _iconView;
}

@property (nonatomic, readonly) bool allowsMoveOperation;
@property (nonatomic, readonly) NSString *bestAvailableUTI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long fileOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIconView *iconView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowsMoveOperation;
- (id)bestAvailableUTI;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)fileOptions;
- (id)iconView;
- (id)initWithIconView:(id)arg1 bestUTI:(id)arg2 allowsMoveOperation:(bool)arg3 fileOptions:(long long)arg4;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
