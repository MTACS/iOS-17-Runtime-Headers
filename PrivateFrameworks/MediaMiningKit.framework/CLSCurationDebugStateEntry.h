
@interface CLSCurationDebugStateEntry : NSObject {
    NSString * _agent;
    NSString * _reason;
    NSString * _stage;
    unsigned long long  _state;
}

@property (readonly) NSString *agent;
@property (readonly) NSString *reason;
@property (readonly) NSString *stage;
@property (readonly) unsigned long long state;

- (void).cxx_destruct;
- (id)agent;
- (id)initWithState:(unsigned long long)arg1 reason:(id)arg2 agent:(id)arg3 stage:(id)arg4;
- (id)reason;
- (id)stage;
- (unsigned long long)state;

@end
