
@interface FLSpecifierTapHandler : NSObject {
    <FLSpecifierTapHandlerDelegate> * _delegate;
}

@property (nonatomic) <FLSpecifierTapHandlerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleActionForItem:(id)arg1 fromSpecifier:(id)arg2 eventSource:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)actionTapped:(id)arg1 eventSource:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)setDelegate:(id)arg1;

@end
