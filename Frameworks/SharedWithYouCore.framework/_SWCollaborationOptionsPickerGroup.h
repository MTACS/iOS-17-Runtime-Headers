
@interface _SWCollaborationOptionsPickerGroup : _SWCollaborationOptionsGroup {
    bool  _isUpdatingSelectionState;
    NSString * _selectedOptionIdentifier;
}

@property (nonatomic, retain) NSString *selectedOptionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_defaultSelectedOptionIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 footer:(id)arg3 options:(id)arg4;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 footer:(id)arg3 options:(id)arg4 selectedOptionIdentifierIndex:(long long)arg5;
- (id)selectedOptionIdentifier;
- (void)setOptions:(id)arg1;
- (void)setSelectedOptionIdentifier:(id)arg1;

@end
