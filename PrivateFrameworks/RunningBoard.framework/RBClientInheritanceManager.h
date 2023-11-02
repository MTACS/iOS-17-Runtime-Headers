
@interface RBClientInheritanceManager : NSObject {
    bool  _awaitingAck;
    <RBClientInheritanceManagerDelegate> * _delegate;
    NSMutableSet * _inheritances;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _queuedGainedInheritances;
    NSMutableSet * _queuedLostInheritances;
}

@property (nonatomic, readonly) <RBClientInheritanceManagerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithInheritances:(id)arg1 delegate:(id)arg2;
- (void)setInheritances:(id)arg1;

@end
