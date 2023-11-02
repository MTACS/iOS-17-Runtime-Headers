
@interface BMSiriPostSiriEngagementSignal : BMEventBase <BMStoreData> {
    NSString * _action;
    NSString * _domain;
    double  _donatedTimestamp;
    bool  _hasDonatedTimestamp;
    bool  _hasIsPostSiriEngagement;
    bool  _isPostSiriEngagement;
    NSArray * _pseContents;
    BMSiriPostSiriEngagementSignalDeltaEvent * _pseDelta;
}

@property (nonatomic, readonly) NSString *action;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) double donatedTimestamp;
@property (nonatomic) bool hasDonatedTimestamp;
@property (nonatomic) bool hasIsPostSiriEngagement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPostSiriEngagement;
@property (nonatomic, readonly) NSArray *pseContents;
@property (nonatomic, readonly) BMSiriPostSiriEngagementSignalDeltaEvent *pseDelta;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_pseContentsJSONArray;
- (id)action;
- (unsigned int)dataVersion;
- (id)description;
- (id)domain;
- (double)donatedTimestamp;
- (bool)hasDonatedTimestamp;
- (bool)hasIsPostSiriEngagement;
- (id)initByReadFrom:(id)arg1;
- (id)initWithDomain:(id)arg1 action:(id)arg2 isPostSiriEngagement:(id)arg3 pseDelta:(id)arg4 pseContents:(id)arg5 donatedTimestamp:(id)arg6;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPostSiriEngagement;
- (id)jsonDictionary;
- (id)pseContents;
- (id)pseDelta;
- (id)serialize;
- (void)setHasDonatedTimestamp:(bool)arg1;
- (void)setHasIsPostSiriEngagement:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
