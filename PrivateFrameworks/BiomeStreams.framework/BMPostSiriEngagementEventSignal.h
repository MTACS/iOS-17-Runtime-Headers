
@interface BMPostSiriEngagementEventSignal : BMEventBase <BMStoreData> {
    NSString * _action;
    NSString * _domain;
    bool  _hasIsPostSiriEngagement;
    bool  _isPostSiriEngagement;
    NSArray * _pseContents;
    BMPostSiriEngagementEventSignalDeltaEvent * _pseDelta;
}

@property (nonatomic, readonly) NSString *action;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic) bool hasIsPostSiriEngagement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPostSiriEngagement;
@property (nonatomic, readonly) NSArray *pseContents;
@property (nonatomic, readonly) BMPostSiriEngagementEventSignalDeltaEvent *pseDelta;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)action;
- (unsigned int)dataVersion;
- (id)description;
- (id)domain;
- (bool)hasIsPostSiriEngagement;
- (id)initByReadFrom:(id)arg1;
- (id)initWithDomain:(id)arg1 action:(id)arg2 isPostSiriEngagement:(bool)arg3 pseDelta:(id)arg4 pseContents:(id)arg5;
- (id)initWithDomain:(id)arg1 action:(id)arg2 isPostSiriEngagement:(bool)arg3 pseDelta:(id)arg4 pseContentsDictionary:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isPostSiriEngagement;
- (id)pseContents;
- (id)pseDelta;
- (id)serialize;
- (void)setHasIsPostSiriEngagement:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
