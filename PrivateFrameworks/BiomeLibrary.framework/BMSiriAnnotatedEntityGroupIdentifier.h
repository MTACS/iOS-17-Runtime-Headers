
@interface BMSiriAnnotatedEntityGroupIdentifier : BMEventBase <BMStoreData> {
    NSString * _groupID;
    bool  _hasSeq;
    unsigned int  _seq;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic) bool hasSeq;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int seq;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)groupID;
- (bool)hasSeq;
- (id)initByReadFrom:(id)arg1;
- (id)initWithGroupID:(id)arg1 seq:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (unsigned int)seq;
- (id)serialize;
- (void)setHasSeq:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
