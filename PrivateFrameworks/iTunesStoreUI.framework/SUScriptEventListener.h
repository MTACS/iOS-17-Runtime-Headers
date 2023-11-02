
@interface SUScriptEventListener : NSObject {
    WebScriptObject * _callback;
    NSLock * _lock;
    NSString * _name;
    bool  _useCapture;
}

@property (retain) WebScriptObject *callback;
@property (copy) NSString *name;
@property bool shouldUseCapture;

- (void).cxx_destruct;
- (id)callback;
- (id)init;
- (id)name;
- (void)setCallback:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShouldUseCapture:(bool)arg1;
- (bool)shouldUseCapture;

@end
