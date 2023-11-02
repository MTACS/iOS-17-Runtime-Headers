
@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction {
    int (* _functionPointer;
    void * _userData;
}

@property (nonatomic) int (*functionPointer;
@property (nonatomic) void*userData;

- (int (*)functionPointer;
- (bool)registerWithConnection:(id)arg1;
- (void)setFunctionPointer:(int (*)arg1;
- (void)setUserData:(void*)arg1;
- (void*)userData;

@end
