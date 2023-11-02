
@interface MUImpressionsCalculator : NSObject {
    bool  _active;
    MUImpressionsCalculatorConfiguration * _configuration;
    id /* block */  _observerBlock;
    NSUUID * _sessionIdentifier;
    NSMutableDictionary * _uiElementsByIdentifiers;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) MUImpressionsCalculatorConfiguration *configuration;
@property (nonatomic, readonly) NSString *debugState;
@property (nonatomic, readonly) bool hasImpressionElements;
@property (nonatomic, copy) id /* block */ observerBlock;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, retain) NSUUID *sessionIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *uiElementsByIdentifiers;

- (void).cxx_destruct;
- (void)_checkVisibilityForAllItemsOnDate:(id)arg1;
- (void)_checkVisibilityForElement:(id)arg1 onDate:(id)arg2;
- (void)_didEnterBackground:(id)arg1;
- (void)_handleNotification:(id)arg1 withProposedActiveState:(bool)arg2;
- (void)_logEnterForImpressionUIElement:(id)arg1 usingStartDate:(id)arg2;
- (void)_logExitForImpressionUIElement:(id)arg1 usingExitDate:(id)arg2;
- (void)_logWorkingSetWithDidBecomeVisible:(bool)arg1;
- (void)_registerForBackgroundingNotifications;
- (id)_uiElementForIdentifier:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (id)configuration;
- (id)debugState;
- (bool)hasImpressionElements;
- (id)initWithConfiguration:(id)arg1;
- (bool)isActive;
- (id /* block */)observerBlock;
- (id)scrollView;
- (id)sessionIdentifier;
- (void)setActive:(bool)arg1;
- (void)setObserverBlock:(id /* block */)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (id)uiElementsByIdentifiers;

@end
