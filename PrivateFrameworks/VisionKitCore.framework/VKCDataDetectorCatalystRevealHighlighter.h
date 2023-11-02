
@interface VKCDataDetectorCatalystRevealHighlighter : NSObject {
    <VKCDataDetectorCatalystRevealHighlighterDelegate> * _delegate;
    VKCDataDetectorElementView * _elementView;
    bool  _highlighting;
}

@property (nonatomic) <VKCDataDetectorCatalystRevealHighlighterDelegate> *delegate;
@property (nonatomic) VKCDataDetectorElementView *elementView;
@property (nonatomic) bool highlighting;

- (void).cxx_destruct;
- (id)delegate;
- (id)elementView;
- (bool)highlighting;
- (void)setDelegate:(id)arg1;
- (void)setElementView:(id)arg1;
- (void)setHighlighting:(bool)arg1;

@end
