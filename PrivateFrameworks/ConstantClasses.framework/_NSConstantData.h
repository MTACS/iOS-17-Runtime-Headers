
@interface _NSConstantData : NSData

+ (id)alloc;

- (const void*)bytes;
- (void)dealloc;
- (unsigned long long)length;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
