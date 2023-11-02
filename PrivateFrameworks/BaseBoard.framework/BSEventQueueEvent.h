
@interface BSEventQueueEvent : NSObject {
    id /* block */  _handler;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *name;

+ (id)eventWithName:(id)arg1 handler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)description;
- (void)execute;
- (id)name;

@end
