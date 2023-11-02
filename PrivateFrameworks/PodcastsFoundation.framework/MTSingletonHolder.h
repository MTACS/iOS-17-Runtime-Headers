
@interface MTSingletonHolder : NSObject {
    id  _instance;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) id instance;

- (void).cxx_destruct;
- (id)instance;
- (void)setInstance:(id)arg1;

@end
