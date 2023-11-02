
@interface WFUIKitActionInterfaceRequest : NSObject <NSSecureCoding> {
    NSString * _actionClassName;
    struct CGSize { 
        double width; 
        double height; 
    }  _presentationSize;
    NSString * _userInterfaceClassName;
}

@property (nonatomic, readonly) NSString *actionClassName;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } presentationSize;
@property (nonatomic, readonly) NSString *userInterfaceClassName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionClassName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActionClassName:(id)arg1 userInterfaceClassName:(id)arg2 presentationSize:(struct CGSize { double x1; double x2; })arg3;
- (id)initWithCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })presentationSize;
- (id)userInterfaceClassName;

@end
