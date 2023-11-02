
@interface MessageContentItemRepresentationTask : NSObject {
    <EMContentItem> * _contentItem;
    NSProgress * _contentRequestProgress;
    EFPromise * _contentRequestPromise;
    EFLocked * _invokerIDs;
    long long  _networkUsage;
    NSProgress * _topLevelProgress;
    NSString * _type;
}

@property (nonatomic, retain) <EMContentItem> *contentItem;
@property (nonatomic, retain) NSProgress *contentRequestProgress;
@property (nonatomic, retain) EFPromise *contentRequestPromise;
@property (nonatomic, readonly) EFFuture *future;
@property (nonatomic, retain) EFLocked *invokerIDs;
@property (nonatomic) long long networkUsage;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, retain) NSProgress *topLevelProgress;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (void)addAccessedByInvokerWithID:(id)arg1;
- (id)contentItem;
- (id)contentRequestProgress;
- (id)contentRequestPromise;
- (id)future;
- (bool)hasBeenAccessedByInvokerWithID:(id)arg1;
- (id)initWithContentItem:(id)arg1 type:(id)arg2 networkUsage:(long long)arg3;
- (id)invokerIDs;
- (long long)networkUsage;
- (id)progress;
- (void)resume;
- (void)setContentItem:(id)arg1;
- (void)setContentRequestProgress:(id)arg1;
- (void)setContentRequestPromise:(id)arg1;
- (void)setInvokerIDs:(id)arg1;
- (void)setNetworkUsage:(long long)arg1;
- (void)setTopLevelProgress:(id)arg1;
- (void)setType:(id)arg1;
- (id)topLevelProgress;
- (id)type;

@end
