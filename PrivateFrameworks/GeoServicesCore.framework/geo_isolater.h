
@interface geo_isolater : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    char * _name;
}

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithName:(const char *)arg1;

@end
