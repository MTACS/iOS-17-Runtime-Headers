
@interface MTEventHandlerRegistration : MTObject {
    NSArray * _eventData;
    MTEventHandler * _eventHandler;
    Class  _eventHandlerClass;
    NSString * _registeredName;
}

@property (nonatomic, retain) NSArray *eventData;
@property (nonatomic, retain) MTEventHandler *eventHandler;
@property (nonatomic, retain) Class eventHandlerClass;
@property (nonatomic, retain) NSString *registeredName;

- (void).cxx_destruct;
- (id)eventData;
- (id)eventHandler;
- (Class)eventHandlerClass;
- (id)initWithMetricsKit:(id)arg1 name:(id)arg2 class:(Class)arg3 eventData:(id)arg4;
- (id)registeredName;
- (void)setEventData:(id)arg1;
- (void)setEventHandler:(id)arg1;
- (void)setEventHandlerClass:(Class)arg1;
- (void)setRegisteredName:(id)arg1;

@end
