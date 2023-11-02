
@interface WFActionWillRunLNActionTestingEvent : WFActionTestingEvent {
    LNAction * _lnAction;
}

@property (nonatomic, readonly) LNAction *lnAction;

- (void).cxx_destruct;
- (id)initWithAction:(id)arg1 lnAction:(id)arg2;
- (id)lnAction;

@end
