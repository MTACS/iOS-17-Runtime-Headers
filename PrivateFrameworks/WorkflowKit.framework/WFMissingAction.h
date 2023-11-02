
@interface WFMissingAction : WFAction {
    bool  _isForLocalization;
}

@property (nonatomic) bool isForLocalization;

- (id)descriptionDictionary;
- (id)iconImage;
- (bool)inputPassthrough;
- (bool)isForLocalization;
- (bool)isMissing;
- (id)name;
- (bool)requiresRemoteExecution;
- (void)runWithInput:(id)arg1 error:(id*)arg2;
- (void)setIsForLocalization:(bool)arg1;

@end
