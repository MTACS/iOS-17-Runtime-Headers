
@interface HUQuickControlWheelPickerViewItem : NSObject {
    bool  _isSelected;
    NSString * _text;
    id  _value;
}

@property (nonatomic, readonly) bool isSelected;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, readonly, copy) id value;

- (void).cxx_destruct;
- (id)initWithHFMultiStateControlItemValue:(id)arg1 text:(id)arg2 isSelected:(bool)arg3;
- (id)initWithHFTVInputControlItemValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSelected;
- (id)text;
- (id)value;

@end
