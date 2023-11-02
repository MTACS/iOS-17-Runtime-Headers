
@interface VUIActionRemoveFromPlayHistory : VUIAction {
    NSString * _deleteID;
    bool  _isContinueWatching;
}

@property (nonatomic, retain) NSString *deleteID;
@property (nonatomic) bool isContinueWatching;

- (void).cxx_destruct;
- (id)deleteID;
- (id)initWithContextData:(id)arg1 isContinueWatching:(bool)arg2;
- (bool)isContinueWatching;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDeleteID:(id)arg1;
- (void)setIsContinueWatching:(bool)arg1;

@end
