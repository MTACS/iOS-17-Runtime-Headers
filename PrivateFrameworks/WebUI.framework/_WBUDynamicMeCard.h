
@interface _WBUDynamicMeCard : NSObject {
    NSMutableArray * _blocksPendingMeCard;
    CNContact * _me;
    bool  _meCardExists;
}

@property (nonatomic, readonly) bool meCardExists;

+ (id)_contactObjectComponentForString:(id)arg1;

- (void).cxx_destruct;
- (void)_fetchContactKeysWithHandler:(id /* block */)arg1;
- (void)_meCardChanged:(id)arg1;
- (id)init;
- (id)me;
- (bool)meCardExists;
- (void)performWhenReady:(id /* block */)arg1;
- (id)valueForProperty:(id)arg1 contact:(id)arg2;

@end
