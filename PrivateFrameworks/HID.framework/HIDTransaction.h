
@interface HIDTransaction : NSObject {
    struct __IOHIDTransaction { } * _transaction;
}

@property long long direction;

- (bool)commitElements:(id)arg1 error:(out id*)arg2;
- (bool)commitElements:(id)arg1 error:(out id*)arg2 timeout:(long long)arg3 callback:(id /* block */)arg4;
- (void)dealloc;
- (id)description;
- (long long)direction;
- (id)initWithDevice:(id)arg1;
- (void)setDirection:(long long)arg1;

@end
