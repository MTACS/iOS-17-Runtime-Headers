
@interface DBWorkspaceStateChangeRequest : NSObject <NSCopying, NSMutableCopying> {
    NSMutableArray * _changeItems;
    id /* block */  _completionHandler;
    RBSProcessHandle * _source;
}

@property (nonatomic, readonly) NSArray *changeItems;
@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)_initWithRequest:(id)arg1;
- (id)changeItems;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
