
@interface AVTUIControllerPresentation : NSObject {
    UIViewController * _controller;
    <AVTUIControllerPresentationDelegate> * _delegate;
    MSMessagesAppViewController * _modalMessagesController;
}

@property (nonatomic, readonly) UIViewController *controller;
@property (nonatomic) <AVTUIControllerPresentationDelegate> *delegate;
@property (nonatomic) MSMessagesAppViewController *modalMessagesController;

+ (id)pendingGlobalPresentation;
+ (id)presentationWithWrappingForController:(id)arg1;
+ (void)setPendingGlobalPresentation:(id)arg1;

- (void).cxx_destruct;
- (id)controller;
- (id)delegate;
- (id)initWithController:(id)arg1;
- (id)modalMessagesController;
- (void)setDelegate:(id)arg1;
- (void)setModalMessagesController:(id)arg1;
- (void)viewWillBeObstructed;

@end
