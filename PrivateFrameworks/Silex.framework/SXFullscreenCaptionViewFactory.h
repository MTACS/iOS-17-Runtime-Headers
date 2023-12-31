
@interface SXFullscreenCaptionViewFactory : NSObject <SXFullscreenCaptionViewFactory> {
    <SXComponentActionHandler> * _actionHandler;
    <SXTextSourceFactory> * _textSourceFactory;
}

@property (nonatomic, readonly) <SXComponentActionHandler> *actionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXTextSourceFactory> *textSourceFactory;

- (void).cxx_destruct;
- (id)actionHandler;
- (id)createCaptionView;
- (id)initWithTextSourceFactory:(id)arg1 actionHandler:(id)arg2;
- (id)textSourceFactory;

@end
