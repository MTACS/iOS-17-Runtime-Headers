
@interface ActionButtonConfigurationUI.ActionSelectorItem : NSObject <ABActionItem> {
    void action;
    void canBeHighlighted;
    void identifier;
}

@property (nonatomic, readonly) bool canBeHighlighted;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) UIImage *image;

- (void).cxx_destruct;
- (bool)canBeHighlighted;
- (id)color;
- (id)identifier;
- (id)image;
- (id)init;

@end
