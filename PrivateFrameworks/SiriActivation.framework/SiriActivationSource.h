
@interface SiriActivationSource : NSObject {
    bool  _active;
    BSServiceConnection * _connection;
    NSString * _identifier;
    bool  _knowsIfActive;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (oneway void)activeChangedTo:(id)arg1;
- (void)dealloc;
- (id)identifier;
- (id)init;
- (void)invalidate;
- (bool)isActive;
- (bool)isEnabled;
- (void)setIdentifier:(id)arg1;

@end
