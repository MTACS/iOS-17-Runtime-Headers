
@interface SKThreadSafeMutableArray : NSObject <NSCopying, NSFastEnumeration, NSMutableCopying, NSSecureCoding> {
    NSMutableArray * _storage;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _storageLock;
}

@property (readonly) NSArray *arrayRepresentation;

- (void).cxx_destruct;
- (id)arrayRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initWithNSMutableArray:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeObjectsInArray:(id)arg1;

@end
