
@interface UAFAssetSetObserver : NSObject {
    NSString * _assetSetName;
    int  _autoAssetNotifyToken;
    <UAFAssetSetObserverDelegate> * _delegate;
    NSMutableArray * _namespaceTokens;
    NSDate * _namespaceUpdateDate;
    NSSet * _namespaces;
    NSMutableSet * _namespacesToIgnore;
    int  _notifyToken;
    TRIClient * _trial;
    id /* block */  _updateHandler;
}

@property (nonatomic, retain) NSString *assetSetName;
@property (nonatomic) int autoAssetNotifyToken;
@property (nonatomic, retain) <UAFAssetSetObserverDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *namespaceTokens;
@property (nonatomic, retain) NSDate *namespaceUpdateDate;
@property (nonatomic, retain) NSSet *namespaces;
@property (nonatomic, retain) NSMutableSet *namespacesToIgnore;
@property (nonatomic) int notifyToken;
@property (nonatomic, retain) TRIClient *trial;
@property (nonatomic, copy) id /* block */ updateHandler;

+ (id)getConcurrentQueue;
+ (id)getSerialQueue;
+ (int)listenForAutoAssetNotificationsForAssetSet:(id)arg1 queue:(id)arg2 updateHandler:(id /* block */)arg3;
+ (int)listenForUAFNotificationsForAssetSet:(id)arg1 queue:(id)arg2 updateHandler:(id /* block */)arg3;
+ (id)notificationForAssetSet:(id)arg1;
+ (bool)sendUAFNotificationForAssetSet:(id)arg1;

- (void).cxx_destruct;
- (id)assetSetName;
- (int)autoAssetNotifyToken;
- (void)dealloc;
- (id)delegate;
- (id)initWithAssetSet:(id)arg1 configurationDirURLs:(id)arg2 queue:(id)arg3 delegate:(id)arg4;
- (id)initWithAssetSet:(id)arg1 configurationDirURLs:(id)arg2 queue:(id)arg3 updateHandler:(id /* block */)arg4;
- (id)initWithAssetSet:(id)arg1 configurationDirURLs:(id)arg2 queue:(id)arg3 updateHandler:(id /* block */)arg4 delegate:(id)arg5;
- (id)initWithAssetSet:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (id)initWithAssetSet:(id)arg1 queue:(id)arg2 updateHandler:(id /* block */)arg3;
- (bool)namespaceHasChanged:(id)arg1;
- (id)namespaceTokens;
- (id)namespaceUpdateDate;
- (id)namespaces;
- (id)namespacesToIgnore;
- (int)notifyToken;
- (void)resetNamespacesToIgnore:(id)arg1;
- (void)setAssetSetName:(id)arg1;
- (void)setAutoAssetNotifyToken:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNamespaceTokens:(id)arg1;
- (void)setNamespaceUpdateDate:(id)arg1;
- (void)setNamespaces:(id)arg1;
- (void)setNamespacesToIgnore:(id)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setTrial:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id)trial;
- (id /* block */)updateHandler;

@end
