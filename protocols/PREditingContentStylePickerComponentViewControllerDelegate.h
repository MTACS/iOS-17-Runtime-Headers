
@protocol PREditingContentStylePickerComponentViewControllerDelegate

@required

- (PREditingPosterContentStyleCoordinator *)contentStylePickerComponentViewController:(PREditingContentStylePickerComponentViewController *)arg1 coordinatorForStyle:(id <PRPosterContentStyle>)arg2 isSuggested:(bool)arg3;
- (void)contentStylePickerComponentViewController:(PREditingContentStylePickerComponentViewController *)arg1 didSelectStyle:(id <PRPosterContentStyle>)arg2 userSelected:(bool)arg3;
- (void)contentStylePickerComponentViewControllerDidChangeHeight:(PREditingContentStylePickerComponentViewController *)arg1;

@end
