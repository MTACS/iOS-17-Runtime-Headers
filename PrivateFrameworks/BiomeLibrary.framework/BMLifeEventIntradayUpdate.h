
@interface BMLifeEventIntradayUpdate : BMEventBase <BMStoreData> {
    bool  _finalEvent;
    bool  _hasFinalEvent;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool finalEvent;
@property (nonatomic) bool hasFinalEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (bool)finalEvent;
- (bool)hasFinalEvent;
- (id)initByReadFrom:(id)arg1;
- (id)initWithFinalEvent:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasFinalEvent:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
