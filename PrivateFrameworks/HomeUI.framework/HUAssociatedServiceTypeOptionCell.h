
@interface HUAssociatedServiceTypeOptionCell : UITableViewCell <HUDisableableCellProtocol> {
    bool  _checked;
    bool  _disabled;
    bool  _suggestion;
}

@property (getter=isChecked, nonatomic) bool checked;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (getter=isSuggestion, nonatomic) bool suggestion;
@property (readonly) Class superclass;

- (id)colorForCurrentState;
- (bool)isChecked;
- (bool)isDisabled;
- (bool)isSuggestion;
- (void)prepareForReuse;
- (void)setChecked:(bool)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setSuggestion:(bool)arg1;

@end
