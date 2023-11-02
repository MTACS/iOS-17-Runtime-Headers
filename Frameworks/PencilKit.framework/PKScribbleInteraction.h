
@interface PKScribbleInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction> {
    <PKScribbleInteractionWrapper> * _cachedWrapper;
    <PKScribbleInteractionDelegate> * _delegate;
    <PKScribbleInteractionElementSource> * _elementSource;
    bool  _requestElementsShouldCallBackSynchronously;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKScribbleInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKScribbleInteractionElementSource> *elementSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (id)elementSource;
- (id)scribbleInteractionWrapper;
- (void)setDelegate:(id)arg1;
- (void)setElementSource:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
