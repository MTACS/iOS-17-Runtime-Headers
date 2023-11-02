
@protocol FCUIMenuElement <NSObject>

@required

- (bool)isHighlighted;
- (bool)isMenuElement;
- (void)performAction;
- (NSString *)representedObjectIdentifier;
- (void)setHighlighted:(bool)arg1;

@optional

- (bool)isSelected;
- (void)setSelected:(bool)arg1;

@end
