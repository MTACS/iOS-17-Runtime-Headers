
@interface _LSDataBackedPropertyList : _LSLazyPropertyList {
    struct unfair_lock_mutex { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    _LSPlistHint * _plistHint;
    NSData * _rawPlistData;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_getPropertyList:(id*)arg1;
- (bool)_getValue:(id*)arg1 forPropertyListKey:(id)arg2;
- (id)_plistHint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)detach;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyListData:(id)arg1;
- (void)prewarm;
- (id)uncheckedObjectsForKeys:(id)arg1;

@end
