
@interface NFEventTrigger : NSObject {
    id /* block */  _block;
    NSSet * _events;
    bool  _fireOnAny;
    bool  _fireOnce;
    NSString * _key;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, readonly, copy) NSSet *events;
@property (nonatomic, readonly) bool fireOnAny;
@property (nonatomic, readonly) bool fireOnce;
@property (nonatomic, readonly, copy) NSString *key;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)events;
- (bool)fireOnAny;
- (bool)fireOnce;
- (id)initWithKey:(id)arg1 fireOnce:(bool)arg2 fireOnAny:(bool)arg3 events:(id)arg4 block:(id /* block */)arg5;
- (id)key;

@end
