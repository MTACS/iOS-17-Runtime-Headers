
@interface UIScribbleInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction> {
    bool  __defaultSystemInteraction;
    <UIScribbleInteractionDelegate> * _delegate;
    bool  _handlingWriting;
    UIView * _view;
}

@property (getter=_isDefaultSystemInteraction, nonatomic, readonly) bool _defaultSystemInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <UIScribbleInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isHandlingWriting, nonatomic, readonly) bool handlingWriting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

+ (void)_lastEventSourceChanged:(long long)arg1;
+ (double)_recommendedBlankSpaceHeight;
+ (bool)isPencilInputExpected;

- (void).cxx_destruct;
- (bool)_isDefaultSystemInteraction;
- (void)_setDefaultSystemInteraction:(bool)arg1;
- (void)_setHandlingWriting:(bool)arg1;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)isHandlingWriting;
- (id)scribbleInteractionWrapper;
- (void)setView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
