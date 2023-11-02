
@interface BMMediaReaction : BMEventBase <BMStoreData> {
    double  _absoluteTimestamp;
    bool  _hasAbsoluteTimestamp;
    bool  _hasType;
    NSString * _mediaUUID;
    int  _type;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *mediaUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasAbsoluteTimestamp;
- (bool)hasType;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(double)arg1 mediaUUID:(id)arg2 type:(int)arg3;
- (bool)isEqual:(id)arg1;
- (id)mediaUUID;
- (id)serialize;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
