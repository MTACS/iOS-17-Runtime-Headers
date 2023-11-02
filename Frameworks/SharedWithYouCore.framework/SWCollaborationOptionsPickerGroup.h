
@interface SWCollaborationOptionsPickerGroup : SWCollaborationOptionsGroup {
    bool  _isUpdatingSelectionState;
    NSString * _selectedOptionIdentifier;
}

@property (nonatomic, retain) NSString *selectedOptionIdentifier;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_defaultSelectedOptionIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 options:(id)arg2;
- (id)selectedOptionIdentifier;
- (void)setOptions:(id)arg1;
- (void)setSelectedOptionIdentifier:(id)arg1;

@end
