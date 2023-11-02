
@interface SRFaceMetrics : NSObject <NSCopying, NSSecureCoding, SRSampleExporting, SRSampling> {
    unsigned long long  _context;
    ARFaceAnchor * _faceAnchor;
    NSMutableArray * _mutablePartialFaceExpressions;
    NSMutableArray * _mutableWholeFaceExpressions;
    NSString * _sessionIdentifier;
    NSString * _version;
}

@property (nonatomic) unsigned long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) ARFaceAnchor *faceAnchor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *mutablePartialFaceExpressions;
@property (nonatomic, retain) NSMutableArray *mutableWholeFaceExpressions;
@property (nonatomic, readonly, copy) NSArray *partialFaceExpressions;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, readonly, copy) NSArray *wholeFaceExpressions;

+ (void)initialize;
+ (id)new;
+ (bool)supportsSecureCoding;

- (id)binarySampleRepresentation;
- (unsigned long long)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)faceAnchor;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithHAFacialMetricsPacket:(id)arg1;
- (id)initWithVersion:(id)arg1 sessionIdentifier:(id)arg2 context:(unsigned long long)arg3 faceAnchor:(id)arg4 wholeFaceExpressions:(id)arg5 partialFaceExpressions:(id)arg6;
- (id)initWithVersion:(id)arg1 sessionIdentifier:(id)arg2 context:(unsigned long long)arg3 faceIdentifier:(id)arg4 trackingData:(id)arg5 wholeFaceExpressions:(id)arg6 partialFaceExpressions:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)mutablePartialFaceExpressions;
- (id)mutableWholeFaceExpressions;
- (id)partialFaceExpressions;
- (id)sessionIdentifier;
- (void)setContext:(unsigned long long)arg1;
- (void)setFaceAnchor:(id)arg1;
- (void)setMutablePartialFaceExpressions:(id)arg1;
- (void)setMutableWholeFaceExpressions:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;
- (id)wholeFaceExpressions;

@end
