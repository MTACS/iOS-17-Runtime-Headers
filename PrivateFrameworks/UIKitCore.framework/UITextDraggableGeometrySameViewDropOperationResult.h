
@interface UITextDraggableGeometrySameViewDropOperationResult : NSObject {
    UITextRange * _resultRange;
    id /* block */  _targetedPreviewProvider;
}

@property (nonatomic, readonly) UITextRange *resultRange;
@property (nonatomic, readonly) id /* block */ targetedPreviewProvider;

+ (id)resultWithRange:(id)arg1 targetedPreviewProvider:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)initWithRange:(id)arg1 targetedPreviewProvider:(id /* block */)arg2;
- (id)resultRange;
- (id /* block */)targetedPreviewProvider;

@end
