
@interface _UIContextMenuNode : NSObject {
    bool  _leftOfParentWhenCascading;
    _UIContextMenuListView * _listView;
    UIMenu * _menu;
    _UIContextMenuNode * _next;
    _UIContextMenuNode * _previous;
}

@property (nonatomic) bool leftOfParentWhenCascading;
@property (nonatomic, retain) _UIContextMenuListView *listView;
@property (nonatomic, retain) UIMenu *menu;
@property (nonatomic) _UIContextMenuNode *next;
@property (nonatomic) _UIContextMenuNode *previous;

- (void).cxx_destruct;
- (id)description;
- (bool)leftOfParentWhenCascading;
- (id)listView;
- (id)menu;
- (id)next;
- (id)previous;
- (void)setLeftOfParentWhenCascading:(bool)arg1;
- (void)setListView:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setNext:(id)arg1;
- (void)setPrevious:(id)arg1;

@end
