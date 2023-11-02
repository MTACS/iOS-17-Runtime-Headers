
@protocol AVTGroupPickerDelegate <NSObject>

@required

- (void)groupPicker:(id <AVTGroupPicker>)arg1 didDeselectGroupAtIndex:(long long)arg2;
- (void)groupPicker:(id <AVTGroupPicker>)arg1 didSelectGroupAtIndex:(long long)arg2 tapped:(bool)arg3;

@end
