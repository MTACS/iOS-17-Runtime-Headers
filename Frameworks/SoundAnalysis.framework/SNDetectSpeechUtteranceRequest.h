
@interface SNDetectSpeechUtteranceRequest : NSObject <NSCopying, NSSecureCoding, SNAnalyzerCreating, SNRequest> {
    long long  _requestType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) double decisionDelay;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createAnalyzerWithError:(id*)arg1;
- (double)decisionDelay;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestType:(long long)arg1;
- (bool)isEqual:(id)arg1;

@end
