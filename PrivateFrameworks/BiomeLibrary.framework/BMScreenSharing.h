
@interface BMScreenSharing : BMEventBase <BMStoreData> {
    bool  _hasIsStart;
    bool  _isStart;
    int  _type;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIsStart;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isStart;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (bool)hasIsStart;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIsStart:(id)arg1 type:(int)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isStart;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasIsStart:(bool)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
