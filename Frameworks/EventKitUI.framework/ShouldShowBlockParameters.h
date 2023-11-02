
@interface ShouldShowBlockParameters : NSObject {
    NSArray * _events;
    UIViewController * _presentationController;
}

@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) UIViewController *presentationController;

- (void).cxx_destruct;
- (id)events;
- (id)initWithEvents:(id)arg1 presentationController:(id)arg2;
- (id)presentationController;

@end
