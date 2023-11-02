
@interface _UIEditMenuCellState : NSObject {
    bool  _disabled;
}

@property (getter=isDisabled, nonatomic) bool disabled;

- (bool)isDisabled;
- (bool)isEqual:(id)arg1;
- (void)setDisabled:(bool)arg1;

@end
