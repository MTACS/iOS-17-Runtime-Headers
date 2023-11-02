
@interface BMSiriService : BMEventBase <BMStoreData> {
    int  _dismissalReason;
    bool  _hasUnintended;
    int  _requestSource;
    bool  _unintended;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int dismissalReason;
@property (nonatomic) bool hasUnintended;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int requestSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool unintended;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (int)dismissalReason;
- (bool)hasUnintended;
- (id)initByReadFrom:(id)arg1;
- (id)initWithDismissalReason:(int)arg1 unintended:(id)arg2 requestSource:(int)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)requestSource;
- (id)serialize;
- (void)setHasUnintended:(bool)arg1;
- (bool)unintended;
- (void)writeTo:(id)arg1;

@end
