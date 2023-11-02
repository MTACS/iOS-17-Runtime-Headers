
@interface BMActivityLevel : BMEventBase <BMStoreData> {
    bool  _hasInUseStatus;
    int  _inUseStatus;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasInUseStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int inUseStatus;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (bool)hasInUseStatus;
- (int)inUseStatus;
- (id)initByReadFrom:(id)arg1;
- (id)initWithInUseStatus:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasInUseStatus:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
