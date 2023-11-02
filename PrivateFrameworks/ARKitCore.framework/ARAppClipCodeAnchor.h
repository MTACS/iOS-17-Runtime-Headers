
@interface ARAppClipCodeAnchor : ARAnchor <ARTrackable> {
    float  _confidence;
    NSNumber * _instanceID;
    bool  _isScaleReliable;
    bool  _isTracked;
    float  _radius;
    NSURL * _url;
    long long  _urlDecodingStateInternal;
    unsigned long long  _urlEncodingVersion;
}

@property (nonatomic) float confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *instanceID;
@property (nonatomic) bool isScaleReliable;
@property (nonatomic) bool isTracked;
@property (nonatomic) float radius;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic, readonly) long long urlDecodingState;
@property (nonatomic) long long urlDecodingStateInternal;
@property (nonatomic) unsigned long long urlEncodingVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)confidence;
- (id)copyWithAppClipCodeResult:(id)arg1 isTracked:(bool)arg2;
- (id)copyWithTrackedState:(bool)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)initWithAppClipCodeResult:(id)arg1 instanceID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (bool)isScaleReliable;
- (bool)isTracked;
- (float)radius;
- (void)setConfidence:(float)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setIsScaleReliable:(bool)arg1;
- (void)setIsTracked:(bool)arg1;
- (void)setRadius:(float)arg1;
- (void)setUrl:(id)arg1;
- (void)setUrlDecodingStateInternal:(long long)arg1;
- (void)setUrlEncodingVersion:(unsigned long long)arg1;
- (id)url;
- (long long)urlDecodingState;
- (long long)urlDecodingStateInternal;
- (unsigned long long)urlEncodingVersion;

@end
