
@interface SVXServiceCommandHandlerRegistry : NSObject {
    NSDictionary * _handlersByServiceCommandClassName;
}

- (void).cxx_destruct;
- (id)handlersForCommand:(id)arg1;
- (id)initWithHandlers:(id)arg1;

@end
