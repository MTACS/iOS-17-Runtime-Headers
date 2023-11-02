
@interface FigSandboxRegistrationObjCWrapper : NSObject {
    struct FigOpaqueSandboxRegistration { } * sandboxreg;
}

- (struct FigOpaqueSandboxRegistration { }*)_sandboxRegistration;
- (void)dealloc;
- (id)initWithRegistration:(struct FigOpaqueSandboxRegistration { }*)arg1;

@end
