
@interface WFSelectableListOption : NSObject {
    NSString * _displayTitle;
    bool  _selected;
    id  _value;
}

@property (nonatomic, readonly, copy) NSString *displayTitle;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)displayTitle;
- (id)initWithDisplayTitle:(id)arg1 value:(id)arg2;
- (bool)isSelected;
- (void)setSelected:(bool)arg1;
- (id)value;

@end
