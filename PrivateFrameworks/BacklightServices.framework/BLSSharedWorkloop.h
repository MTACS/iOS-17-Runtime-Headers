
@interface BLSSharedWorkloop : NSObject

+ (void)dispatchWithQOSClass:(unsigned int)arg1 block:(id /* block */)arg2;
+ (id)serialQueueWithQOSClass:(unsigned int)arg1 label:(const char *)arg2;
+ (id)workloop;

@end
