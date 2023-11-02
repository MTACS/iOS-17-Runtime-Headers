
@interface SUCoreFSMAttachedAction : NSObject {
    id  _actionDelegate;
    Class  _eventInfoClass;
    NSString * _fsmAction;
}

@property (nonatomic, readonly) id actionDelegate;
@property (nonatomic, readonly, retain) Class eventInfoClass;
@property (nonatomic, readonly, retain) NSString *fsmAction;

- (void).cxx_destruct;
- (id)actionDelegate;
- (id)description;
- (Class)eventInfoClass;
- (id)fsmAction;
- (id)initWithAction:(id)arg1 usingDelegate:(id)arg2 withInfoClass:(Class)arg3;

@end
