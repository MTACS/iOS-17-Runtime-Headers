
@interface SKThreadSafeMutableDictionary : NSObject <NSCopying, NSFastEnumeration, NSMutableCopying, NSSecureCoding> {
    NSMutableDictionary * _storage;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _storageLock;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)initWithNSMutableDictionary:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
