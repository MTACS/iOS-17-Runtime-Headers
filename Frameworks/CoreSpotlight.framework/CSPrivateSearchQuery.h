
@interface CSPrivateSearchQuery : CSSearchQuery {
    NSString * _indexPath;
    NSString * _resolvedIndexPath;
    CSSearchConnection * _savedConnection;
}

@property (nonatomic, retain) NSString *indexPath;
@property (nonatomic, retain) NSString *resolvedIndexPath;
@property (nonatomic, retain) CSSearchConnection *savedConnection;

- (void).cxx_destruct;
- (id)connection;
- (id)indexPath;
- (id)initWithPath:(id)arg1 queryString:(id)arg2 attributers:(id)arg3;
- (id)initWithPath:(id)arg1 queryString:(id)arg2 context:(id)arg3;
- (id)initWithPath:(id)arg1 queryString:(id)arg2 context:(id)arg3 attributes:(id)arg4;
- (id)resolvedIndexPath;
- (id)savedConnection;
- (void)setIndexPath:(id)arg1;
- (void)setResolvedIndexPath:(id)arg1;
- (void)setSavedConnection:(id)arg1;
- (void)start;

@end
