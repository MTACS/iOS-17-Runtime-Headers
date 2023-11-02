
@interface BMMessagesMediaRendered : BMEventBase <BMStoreData> {
    bool  _hasIsFirstView;
    bool  _hasIsOnScreen;
    bool  _hasRaw_absoluteTimestamp;
    bool  _isFirstView;
    bool  _isOnScreen;
    NSArray * _mediaAttributes;
    double  _raw_absoluteTimestamp;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIsFirstView;
@property (nonatomic) bool hasIsOnScreen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFirstView;
@property (nonatomic, readonly) bool isOnScreen;
@property (nonatomic, readonly) NSArray *mediaAttributes;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_mediaAttributesJSONArray;
- (id)absoluteTimestamp;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasIsFirstView;
- (bool)hasIsOnScreen;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(id)arg1 mediaAttributes:(id)arg2 isOnScreen:(id)arg3 isFirstView:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFirstView;
- (bool)isOnScreen;
- (id)jsonDictionary;
- (id)mediaAttributes;
- (id)serialize;
- (void)setHasIsFirstView:(bool)arg1;
- (void)setHasIsOnScreen:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
