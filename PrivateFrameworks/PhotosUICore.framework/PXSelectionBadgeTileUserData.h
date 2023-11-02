
@interface PXSelectionBadgeTileUserData : NSObject {
    bool  _selected;
}

@property (getter=isSelected, nonatomic) bool selected;

- (bool)isSelected;
- (void)setSelected:(bool)arg1;

@end
