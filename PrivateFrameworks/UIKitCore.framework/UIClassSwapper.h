
@interface UIClassSwapper : NSObject {
    NSString * className;
    id  object;
}

+ (id)swapperForObject:(id)arg1 withClassName:(id)arg2;

- (void).cxx_destruct;
- (id)className;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 andClassName:(id)arg2;
- (id)object;
- (id)performSelectorForObject:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3 withObject:(id)arg4 withObject:(id)arg5;

@end
