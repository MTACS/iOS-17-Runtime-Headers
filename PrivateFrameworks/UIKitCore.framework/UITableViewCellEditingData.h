
@interface UITableViewCellEditingData : NSObject {
    UITableViewCell * _cell;
    UITableViewCellEditControl * _editControl;
    long long  _editingStyle;
    struct { 
        unsigned int addedEditControlAsSubview : 1; 
        unsigned int addedReorderControlAsSubview : 1; 
        unsigned int addedReorderSeparatorViewAsSubview : 1; 
    }  _flags;
    UITableViewCellReorderControl * _reorderControl;
    UIView * _reorderSeparatorView;
}

@property (nonatomic, readonly) bool wantsMaskingWhileAnimatingDisabled;

- (void).cxx_destruct;
- (void)dealloc;
- (id)editControl:(bool)arg1;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2;
- (id)reorderControl:(bool)arg1;
- (id)reorderSeparatorView:(bool)arg1;
- (bool)wantsMaskingWhileAnimatingDisabled;

@end
