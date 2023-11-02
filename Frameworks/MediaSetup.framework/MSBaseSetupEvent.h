
@interface MSBaseSetupEvent : NSObject {
    NSString * _eventName;
}

@property (nonatomic, retain) NSString *eventName;

- (void).cxx_destruct;
- (id)encoded;
- (id)eventName;
- (id)init;
- (void)setEventName:(id)arg1;

@end
