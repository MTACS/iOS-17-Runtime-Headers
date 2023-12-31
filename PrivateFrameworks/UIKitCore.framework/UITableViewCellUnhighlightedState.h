
@interface UITableViewCellUnhighlightedState : NSObject {
    UIColor * _backgroundColor;
    bool  _highlighted;
    bool  _opaque;
}

@property (retain) UIColor *backgroundColor;
@property bool highlighted;
@property bool opaque;

- (void).cxx_destruct;
- (id)backgroundColor;
- (bool)highlighted;
- (bool)opaque;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOpaque:(bool)arg1;

@end
