
@interface ATXOnboardingStackResult : NSObject <NSCopying, NSSecureCoding> {
    ATXDefaultWidgetStack * _stack1;
    ATXDefaultWidgetStack * _stack2;
}

@property (nonatomic, readonly) ATXDefaultWidgetStack *stack1;
@property (nonatomic, readonly) ATXDefaultWidgetStack *stack2;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStack1:(id)arg1 stack2:(id)arg2;
- (id)stack1;
- (id)stack2;

@end
