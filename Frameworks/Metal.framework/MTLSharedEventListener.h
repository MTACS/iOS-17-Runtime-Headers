
@interface MTLSharedEventListener : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)init;
- (id)initWithDispatchQueue:(id)arg1;

@end
