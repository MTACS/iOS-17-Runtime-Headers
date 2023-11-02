
@interface WFActionWillRunIntentTestingEvent : WFActionTestingEvent {
    INIntent * _intent;
}

@property (nonatomic, readonly) INIntent *intent;

- (void).cxx_destruct;
- (id)initWithAction:(id)arg1 intent:(id)arg2;
- (id)intent;

@end
