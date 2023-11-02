
@interface MTEventHandlers : MTObject {
    MTBaseEventDataProvider * _base;
    NSMutableDictionary * _registrations;
}

@property (nonatomic, retain) MTBaseEventDataProvider *base;
@property (nonatomic, retain) NSMutableDictionary *registrations;

- (void).cxx_destruct;
- (id)base;
- (Class)baseDataProviderClass;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)registerDefaultEventHandlers;
- (void)registerEventHandlerName:(id)arg1 eventData:(id)arg2;
- (void)registerEventHandlerName:(id)arg1 eventHandlerClass:(Class)arg2;
- (void)registerEventHandlerName:(id)arg1 eventHandlerClass:(Class)arg2 eventData:(id)arg3;
- (id)registrations;
- (void)setBase:(id)arg1;
- (void)setRegistrations:(id)arg1;

@end
