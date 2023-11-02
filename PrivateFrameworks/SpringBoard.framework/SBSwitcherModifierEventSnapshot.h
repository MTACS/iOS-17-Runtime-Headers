
@interface SBSwitcherModifierEventSnapshot : NSObject {
    NSString * _eventDescription;
    NSString * _eventName;
}

@property (nonatomic, readonly) NSString *eventDescription;
@property (nonatomic, readonly) NSString *eventName;

- (void).cxx_destruct;
- (id)eventDescription;
- (id)eventName;
- (id)initWithEvent:(id)arg1;

@end
