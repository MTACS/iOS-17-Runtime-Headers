
@interface geo_reentrant_isolater : NSObject {
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    char * _name;
}

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithName:(const char *)arg1;

@end
