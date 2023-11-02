
@interface UITextViewDrawingInfo : NSObject {
    bool  _addBottomPadding;
    NSMutableDictionary * _cachedViewProviders;
    <UITextViewDrawingDelegate> * _delegate;
    Class  _drawingClass;
    bool  _rulerEnabled;
    UITextView * _textView;
    PKTiledView * _tiledView;
}

- (void).cxx_destruct;

@end
