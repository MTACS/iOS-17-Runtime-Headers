
@interface CDMBaseRequestHandler : NSObject {
    NSString * _handlerId;
    unsigned long long  _handlerState;
    id  _result;
    CDMServiceGraph * _serviceGraph;
}

@property (nonatomic, readonly) NSString *handlerId;

- (void).cxx_destruct;
- (id)getError;
- (unsigned long long)getHandlerState;
- (id)getResult;
- (id)getServiceGraph;
- (id)handlerId;
- (id)init;
- (id)initWithId:(id)arg1 serviceGraph:(id)arg2;
- (void)setHandlerState:(unsigned long long)arg1;

@end
