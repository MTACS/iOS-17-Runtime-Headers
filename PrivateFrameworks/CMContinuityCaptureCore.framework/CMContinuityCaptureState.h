
@interface CMContinuityCaptureState : NSObject {
    id /* block */  _entryAction;
    id /* block */  _exitAction;
    NSString * _name;
    NSMutableSet * _pendingEvents;
}

@property (nonatomic, copy) id /* block */ entryAction;
@property (nonatomic, copy) id /* block */ exitAction;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableSet *pendingEvents;

- (void).cxx_destruct;
- (id)description;
- (id /* block */)entryAction;
- (id /* block */)exitAction;
- (id)initWithAttributes:(id)arg1 entryAction:(id /* block */)arg2 exitAction:(id /* block */)arg3;
- (id)name;
- (id)pendingEvents;
- (void)setEntryAction:(id /* block */)arg1;
- (void)setExitAction:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (void)setPendingEvents:(id)arg1;

@end
