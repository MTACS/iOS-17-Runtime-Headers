
@interface UIIndirectScribbleInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction> {
    bool  __defaultSystemInteraction;
    long long  __handlingWritingCount;
    <UIIndirectScribbleInteractionDelegate> * _delegate;
    bool  _handlingWriting;
    UIView * _view;
}

@property (getter=_isDefaultSystemInteraction, nonatomic, readonly) bool _defaultSystemInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <UIIndirectScribbleInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isHandlingWriting, setter=_setHandlingWriting:, nonatomic) bool handlingWriting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (long long)_handlingWritingCount;
- (bool)_isDefaultSystemInteraction;
- (void)_setDefaultSystemInteraction:(bool)arg1;
- (void)_setHandlingWriting:(bool)arg1;
- (void)_setHandlingWritingCount:(long long)arg1;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)isHandlingWriting;
- (id)scribbleInteractionWrapper;
- (void)setView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
