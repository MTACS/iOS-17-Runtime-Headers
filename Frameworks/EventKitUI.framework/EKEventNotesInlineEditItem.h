
@interface EKEventNotesInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem, UITextViewDelegate> {
    CalendarNotesCell * _cell;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardRect;
    NSString * _lastTextChange;
    bool  _textViewDirty;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (bool)isInline;
- (bool)isSaveable;
- (void)reset;
- (bool)saveAndDismissWithForce:(bool)arg1;
- (id)searchStringForEventAutocomplete;
- (void)tableViewDidScroll;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (bool)textViewShouldReturn:(id)arg1;

@end
