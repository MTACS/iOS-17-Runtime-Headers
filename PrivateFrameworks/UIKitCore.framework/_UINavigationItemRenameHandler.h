
@interface _UINavigationItemRenameHandler : NSObject {
    UINavigationItem * _associatedItem;
    id /* block */  _didEndRenamingHandler;
    id /* block */  _fileRenameDidEnd;
    id /* block */  _fileRenameDidFail;
    id /* block */  _fileURLForRenaming;
    id /* block */  _shouldBeginRenamingHandler;
    id /* block */  _shouldEndRenamingHandler;
    id /* block */  _willBeginRenamingHandler;
    id /* block */  _willBeginRenamingWithRangeHandler;
}

@property (nonatomic) UINavigationItem *associatedItem;
@property (nonatomic, copy) id /* block */ didEndRenamingHandler;
@property (nonatomic, copy) id /* block */ fileRenameDidEnd;
@property (nonatomic, copy) id /* block */ fileRenameDidFail;
@property (nonatomic, copy) id /* block */ fileURLForRenaming;
@property (nonatomic, copy) id /* block */ shouldBeginRenamingHandler;
@property (nonatomic, copy) id /* block */ shouldEndRenamingHandler;
@property (nonatomic, copy) id /* block */ willBeginRenamingHandler;
@property (nonatomic, copy) id /* block */ willBeginRenamingWithRangeHandler;

+ (void)defaultNavigationItem:(id)arg1 didEndRenamingWithTitle:(id)arg2;
+ (bool)defaultNavigationItem:(id)arg1 shouldEndRenamingWithTitle:(id)arg2;
+ (id)defaultNavigationItem:(id)arg1 willBeginRenamingWithSuggestedTitle:(id)arg2 selectedRange:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
+ (bool)defaultNavigationItemShouldBeginRenaming:(id)arg1 forValidDelegate:(bool)arg2;
+ (id)handlerWithDidEndRenamingHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)_canRename;
- (void)_didEndRenamingWithTitle:(id)arg1;
- (void)_fileRenameDidEndWithFinalURL:(id)arg1;
- (void)_fileRenameDidFailWithError:(id)arg1;
- (id)_fileURLForRenaming;
- (bool)_shouldEndRenamingWithTitle:(id)arg1;
- (id)_willBeginRenamingWithTitle:(id)arg1 selectedRange:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)associatedItem;
- (id /* block */)didEndRenamingHandler;
- (id /* block */)fileRenameDidEnd;
- (id /* block */)fileRenameDidFail;
- (id /* block */)fileURLForRenaming;
- (id)init;
- (id)initWithDidEndRenamingHandler:(id /* block */)arg1;
- (void)setAssociatedItem:(id)arg1;
- (void)setDidEndRenamingHandler:(id /* block */)arg1;
- (void)setFileRenameDidEnd:(id /* block */)arg1;
- (void)setFileRenameDidFail:(id /* block */)arg1;
- (void)setFileURLForRenaming:(id /* block */)arg1;
- (void)setShouldBeginRenamingHandler:(id /* block */)arg1;
- (void)setShouldEndRenamingHandler:(id /* block */)arg1;
- (void)setWillBeginRenamingHandler:(id /* block */)arg1;
- (void)setWillBeginRenamingWithRangeHandler:(id /* block */)arg1;
- (id /* block */)shouldBeginRenamingHandler;
- (id /* block */)shouldEndRenamingHandler;
- (id /* block */)willBeginRenamingHandler;
- (id /* block */)willBeginRenamingWithRangeHandler;

@end
