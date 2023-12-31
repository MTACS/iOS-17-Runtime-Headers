
@interface CLStateTracker : NSObject {
    unsigned long long  _handle;
}

@property (nonatomic, readonly) void*identifier;

+ (unsigned long long)trackerStateSize;
+ (const char *)trackerStateTypeName;

- (void)dealloc;
- (bool)dumpState:(void*)arg1 withSize:(unsigned long long)arg2 hints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg3;
- (void*)identifier;
- (id)initWithQueue:(id)arg1;

@end
