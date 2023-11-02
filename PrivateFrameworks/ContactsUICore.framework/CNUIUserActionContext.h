
@interface CNUIUserActionContext : NSObject <CNUIUserActionContext> {
    <CNUIUserActionCurator> * _actionCurator;
    <CNUIUserActionRecorder> * _actionRecorder;
    NSString * _channelIdentifier;
    BSServiceConnectionEndpoint * _connectionEndpoint;
    <CNUIUserActionDialRequestOpener> * _dialRequestOpener;
    bool  _isOriginatingFromFavorites;
    <CNUIUserActionURLOpener> * _urlOpener;
    <CNUIUserActionUserActivityOpener> * _userActivityOpener;
}

@property (nonatomic, retain) <CNUIUserActionCurator> *actionCurator;
@property (nonatomic, retain) <CNUIUserActionRecorder> *actionRecorder;
@property (nonatomic, copy) NSString *channelIdentifier;
@property (nonatomic, copy) BSServiceConnectionEndpoint *connectionEndpoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <CNUIUserActionDialRequestOpener> *dialRequestOpener;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isOriginatingFromFavorites;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CNUIUserActionURLOpener> *urlOpener;
@property (nonatomic, retain) <CNUIUserActionUserActivityOpener> *userActivityOpener;

+ (id)contextWithExtensionContext:(id)arg1;
+ (id)makeDefaultContext;

- (void).cxx_destruct;
- (id)actionCurator;
- (id)actionRecorder;
- (id)channelIdentifier;
- (id)connectionEndpoint;
- (id)dialRequestOpener;
- (id)init;
- (id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2;
- (bool)isOriginatingFromFavorites;
- (void)setActionCurator:(id)arg1;
- (void)setActionRecorder:(id)arg1;
- (void)setChannelIdentifier:(id)arg1;
- (void)setConnectionEndpoint:(id)arg1;
- (void)setDialRequestOpener:(id)arg1;
- (void)setIsOriginatingFromFavorites:(bool)arg1;
- (void)setUrlOpener:(id)arg1;
- (void)setUserActivityOpener:(id)arg1;
- (id)urlOpener;
- (id)userActivityOpener;

@end
