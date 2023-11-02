
@interface IDSMagnetCorruptionMetric : NSObject <CUTCoreAnalyticsMetric> {
    unsigned long long  _correctFramesSinceLastCorruption;
    unsigned long long  _correctRawBytesSinceLastCorruption;
    unsigned long long  _discardedRawBytes;
    unsigned long long  _linkType;
    unsigned long long  _recoveryTimeInMs;
}

@property (nonatomic, readonly) unsigned long long correctFramesSinceLastCorruption;
@property (nonatomic, readonly) unsigned long long correctRawBytesSinceLastCorruption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) unsigned long long discardedRawBytes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long linkType;
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long recoveryTimeInMs;
@property (readonly) Class superclass;

- (unsigned long long)correctFramesSinceLastCorruption;
- (unsigned long long)correctRawBytesSinceLastCorruption;
- (id)dictionaryRepresentation;
- (unsigned long long)discardedRawBytes;
- (id)initWithCorrectFramesSinceLastCorruption:(unsigned long long)arg1 correctRawBytesSinceLastCorruption:(unsigned long long)arg2 discardedRawBytes:(unsigned long long)arg3 recoveryTimeInMs:(unsigned long long)arg4 linkType:(unsigned long long)arg5;
- (unsigned long long)linkType;
- (id)name;
- (unsigned long long)recoveryTimeInMs;

@end
