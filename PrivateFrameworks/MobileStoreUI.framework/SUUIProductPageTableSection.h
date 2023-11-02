
@interface SUUIProductPageTableSection : SUUITableViewSection {
    SUUIClientContext * _clientContext;
    bool  _expanded;
}

@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (getter=isExpanded, nonatomic) bool expanded;

- (void).cxx_destruct;
- (id)clientContext;
- (double)heightForTextLayout:(id)arg1 isExpanded:(bool)arg2;
- (bool)isExpanded;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (void)setClientContext:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (id)textBoxTableViewCellForTableView:(id)arg1 indexPath:(id)arg2;

@end
