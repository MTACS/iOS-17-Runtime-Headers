
@interface ENSecKey : NSObject {
    struct __SecKey { } * _keyRef;
}

@property (nonatomic, readonly) struct __SecKey { }*keyRef;

+ (id)keyFromBase64String:(id)arg1 keyClass:(struct __CFString { }*)arg2 error:(id*)arg3;

- (void)dealloc;
- (id)initWithKeyRef:(struct __SecKey { }*)arg1;
- (struct __SecKey { }*)keyRef;

@end
