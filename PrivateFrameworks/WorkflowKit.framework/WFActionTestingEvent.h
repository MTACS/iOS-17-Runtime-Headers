
@interface WFActionTestingEvent : NSObject {
    WFAction * _action;
}

@property (nonatomic, readonly) WFAction *action;

- (void).cxx_destruct;
- (id)action;
- (id)initWithAction:(id)arg1;

@end
