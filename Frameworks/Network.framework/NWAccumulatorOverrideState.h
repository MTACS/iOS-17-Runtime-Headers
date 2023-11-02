
@interface NWAccumulatorOverrideState : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSString * _state;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *state;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)name;
- (void)setName:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (void)updateWithState:(id)arg1;

@end
