
@interface BMSiriRequestCountsStatistics : BMEventBase <BMStoreData> {
    unsigned int  _allRequestCount;
    bool  _hasAllRequestCount;
    bool  _hasUserRequestCount;
    unsigned int  _userRequestCount;
}

@property (nonatomic, readonly) unsigned int allRequestCount;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAllRequestCount;
@property (nonatomic) bool hasUserRequestCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int userRequestCount;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)allRequestCount;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasAllRequestCount;
- (bool)hasUserRequestCount;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAllRequestCount:(id)arg1 userRequestCount:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasAllRequestCount:(bool)arg1;
- (void)setHasUserRequestCount:(bool)arg1;
- (unsigned int)userRequestCount;
- (void)writeTo:(id)arg1;

@end
