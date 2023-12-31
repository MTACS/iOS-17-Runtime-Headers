
@interface RPEventRegistration : NSObject {
    NSString * _eventID;
    id /* block */  _handler;
    NSDictionary * _options;
}

@property (nonatomic, copy) NSString *eventID;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSDictionary *options;

- (void).cxx_destruct;
- (id)eventID;
- (id /* block */)handler;
- (id)options;
- (void)setEventID:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setOptions:(id)arg1;

@end
