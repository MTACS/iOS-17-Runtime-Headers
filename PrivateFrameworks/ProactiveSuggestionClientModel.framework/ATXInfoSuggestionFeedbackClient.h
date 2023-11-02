
@interface ATXInfoSuggestionFeedbackClient : NSObject {
    _PASXPCClientHelper * _xpcClientHelper;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (void)stackDidRotateProactivelyForInfoSuggestion:(id)arg1 isStalenessRotation:(bool)arg2;
- (void)suggestionDismissed:(id)arg1 isDismissalLongTerm:(bool)arg2 completion:(id /* block */)arg3;

@end
