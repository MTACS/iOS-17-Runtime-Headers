
@interface CMContinuityCaptureStateMachineEvent : NSObject {
    id /* block */  _action;
    NSDictionary * _data;
    bool  _isEntry;
    NSString * _name;
}

@property (readonly) id /* block */ action;
@property (retain) NSDictionary *data;
@property (readonly) bool isEntry;
@property (readonly, retain) NSString *name;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)data;
- (id)description;
- (id)initWithName:(id)arg1 isEntry:(bool)arg2 eventAction:(id /* block */)arg3;
- (bool)isEntry;
- (id)name;
- (void)setData:(id)arg1;

@end
