
@interface _UITextDragCaretUpdate : NSObject {
    id /* block */  alongsideAnimations;
    id /* block */  completion;
    bool  isAnimated;
    UIBezierPath * maskPath;
    UITextPosition * position;
    UITextRange * range;
}

- (void).cxx_destruct;

@end
