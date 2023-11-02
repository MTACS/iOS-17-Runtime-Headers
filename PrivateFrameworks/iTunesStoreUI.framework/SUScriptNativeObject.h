
@interface SUScriptNativeObject : NSObject {
    NSLock * _internalLock;
    SUScriptObject * _scriptObject;
    id  _strongObject;
    id  _weakObject;
}

@property (nonatomic, retain) NSLock *internalLock;
@property (retain) id object;
@property SUScriptObject *scriptObject;
@property (nonatomic, retain) id strongObject;
@property (nonatomic) id weakObject;

+ (id)objectWithNativeObject:(id)arg1;
+ (id)objectWithNativeObject:(id)arg1 weak:(bool)arg2;

- (void).cxx_destruct;
- (void)destroyNativeObject;
- (id)init;
- (id)internalLock;
- (void)lock;
- (id)object;
- (id)scriptObject;
- (void)setInternalLock:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setScriptObject:(id)arg1;
- (void)setStrongObject:(id)arg1;
- (void)setWeakObject:(id)arg1;
- (void)setupNativeObject;
- (id)strongObject;
- (void)unlock;
- (id)weakObject;

@end
