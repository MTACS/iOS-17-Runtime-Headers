
@interface BMMediaRendered : BMEventBase <BMStoreData> {
    double  _absoluteTimestamp;
    bool  _hasAbsoluteTimestamp;
    bool  _hasIsFirstView;
    bool  _hasIsOnScreen;
    bool  _isFirstView;
    bool  _isOnScreen;
    NSArray * _mediaAttributes;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic) bool hasIsFirstView;
@property (nonatomic) bool hasIsOnScreen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFirstView;
@property (nonatomic, readonly) bool isOnScreen;
@property (nonatomic, readonly) NSArray *mediaAttributes;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasAbsoluteTimestamp;
- (bool)hasIsFirstView;
- (bool)hasIsOnScreen;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(double)arg1 mediaAttributes:(id)arg2 isOnScreen:(bool)arg3 isFirstView:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isFirstView;
- (bool)isOnScreen;
- (id)mediaAttributes;
- (id)serialize;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setHasIsFirstView:(bool)arg1;
- (void)setHasIsOnScreen:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
