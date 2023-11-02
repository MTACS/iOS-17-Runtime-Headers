
@interface EKUIContextMenuActionInfo : NSObject {
    unsigned long long  _action;
    id /* block */  _actionBlock;
    id /* block */  _configureUIActionBlock;
    unsigned long long  _group;
    unsigned long long  _positionInGroup;
    id /* block */  _selectionStateBlock;
    id /* block */  _shouldShowBlock;
    bool  _showsInEditMenu;
}

@property (nonatomic, readonly) unsigned long long action;
@property (nonatomic, readonly) id /* block */ actionBlock;
@property (nonatomic, readonly) id /* block */ configureUIActionBlock;
@property (nonatomic, readonly) unsigned long long group;
@property (nonatomic, readonly) unsigned long long positionInGroup;
@property (nonatomic, readonly) id /* block */ shouldShowBlock;
@property (nonatomic, readonly) bool showsInEditMenu;

- (void).cxx_destruct;
- (unsigned long long)action;
- (id /* block */)actionBlock;
- (id /* block */)configureUIActionBlock;
- (unsigned long long)group;
- (id)initCalendarMenuPlaceholderInGroup:(unsigned long long)arg1 positionInGroup:(unsigned long long)arg2;
- (id)initWithAction:(unsigned long long)arg1 showsInEditMenu:(bool)arg2 group:(unsigned long long)arg3 positionInGroup:(unsigned long long)arg4 shouldShowBlock:(id /* block */)arg5 configureUIActionBlock:(id /* block */)arg6 actionBlock:(id /* block */)arg7;
- (unsigned long long)positionInGroup;
- (id /* block */)shouldShowBlock;
- (bool)showsInEditMenu;

@end
