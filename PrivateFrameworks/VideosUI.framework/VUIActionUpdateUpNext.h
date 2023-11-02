
@interface VUIActionUpdateUpNext : VUIAction {
    bool  _confirmationShouldWaitCompletion;
    NSString * _itemID;
    NSString * _state;
}

@property (nonatomic) bool confirmationShouldWaitCompletion;
@property (nonatomic, retain) NSString *itemID;
@property (nonatomic, retain) NSString *state;

- (void).cxx_destruct;
- (bool)confirmationShouldWaitCompletion;
- (id)initWithContextData:(id)arg1;
- (bool)isAccountRequired;
- (id)itemID;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setConfirmationShouldWaitCompletion:(bool)arg1;
- (void)setItemID:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
