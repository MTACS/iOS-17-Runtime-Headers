
@interface PKPencilTextInputElementInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction> {
    <PKScribbleInteractionWrapper> * _cachedWrapper;
    <PKPencilTextInputElementInteractionDelegate> * _delegate;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPencilTextInputElementInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

+ (id)_pencilTextInputElementInteractionInView:(id)arg1;

- (void).cxx_destruct;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (id)scribbleInteractionWrapper;
- (void)setDelegate:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
