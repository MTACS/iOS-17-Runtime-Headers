
@interface _UITextInputSessionSelectionAction : _UITextInputSessionAction {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeAfter;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeAfter;

- (id)description;
- (long long)mergeActionIfPossible:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeAfter;
- (void)setRangeAfter:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)textInputActionsType;

@end
