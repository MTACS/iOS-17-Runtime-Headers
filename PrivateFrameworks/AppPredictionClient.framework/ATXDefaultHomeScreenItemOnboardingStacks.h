
@interface ATXDefaultHomeScreenItemOnboardingStacks : NSObject {
    NSArray * _sortedThirdPartyWidgets;
    ATXDefaultWidgetStack * _stack1;
    ATXDefaultWidgetStack * _stack2;
}

@property (nonatomic, readonly) NSArray *sortedThirdPartyWidgets;
@property (nonatomic, readonly) ATXDefaultWidgetStack *stack1;
@property (nonatomic, readonly) ATXDefaultWidgetStack *stack2;

- (void).cxx_destruct;
- (id)initWithOnboardingStack1:(id)arg1 stack2:(id)arg2 sortedThirdPartyWidgets:(id)arg3;
- (id)sortedThirdPartyWidgets;
- (id)stack1;
- (id)stack2;

@end
