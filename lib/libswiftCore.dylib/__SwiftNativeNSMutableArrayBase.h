
@interface __SwiftNativeNSMutableArrayBase : NSMutableArray {
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { 
        struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { 
            struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { 
                _Atomic struct RefCountBitsT<swift::RefCountIsInline> {} __a_value; 
            } __a_; 
        } refCounts; 
    }  refCounts;
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (bool)_isDeallocating;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;
- (bool)_tryRetain;
- (bool)allowsWeakReference;
- (id)autorelease;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;

@end
