
@interface MockBrowserSavedState : _SFBrowserSavedState {
    NSString * _initalURLString;
    unsigned long long  _tabsCount;
}

@property (nonatomic, copy) NSString *initalURLString;
@property (nonatomic) unsigned long long tabsCount;

- (void).cxx_destruct;
- (bool)activeDocumentIsValidForBrowserControllerWithUUID:(id)arg1;
- (id)initalURLString;
- (id)savedTabsStateForBrowserControllerWithUUID:(id)arg1;
- (id)savedTabsStateForBrowserControllerWithUUID:(id)arg1 initialURLString:(id)arg2;
- (void)setInitalURLString:(id)arg1;
- (void)setTabsCount:(unsigned long long)arg1;
- (unsigned long long)tabsCount;

@end
