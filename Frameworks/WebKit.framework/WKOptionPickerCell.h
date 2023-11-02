
@interface WKOptionPickerCell : UIPickerContentView {
    bool  _disabled;
}

@property (nonatomic) bool disabled;

- (bool)_isSelectable;
- (bool)disabled;
- (id)init;
- (id)initWithOptionItem:(const void*)arg1;
- (void)setDisabled:(bool)arg1;

@end
