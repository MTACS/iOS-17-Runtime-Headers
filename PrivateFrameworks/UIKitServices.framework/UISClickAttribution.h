
@interface UISClickAttribution : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _destinationURL;
    BKSHIDEventAuthenticationMessage * _eventMessage;
    NSString * _purchaser;
    NSURL * _reportEndpoint;
    NSString * _sourceDescription;
    unsigned char  _sourceIdentifier;
}

@property (nonatomic, readonly, copy) NSURL *destinationURL;
@property (nonatomic, readonly, copy) BKSHIDEventAuthenticationMessage *eventMessage;
@property (nonatomic, readonly, copy) NSString *purchaser;
@property (nonatomic, readonly, copy) NSURL *reportEndpoint;
@property (nonatomic, readonly, copy) NSString *sourceDescription;
@property (nonatomic, readonly) unsigned char sourceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clickAttributionWithReportEndpoint:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationURL;
- (void)encodeWithCoder:(id)arg1;
- (id)eventMessage;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceIdentifier:(unsigned char)arg1 destinationURL:(id)arg2 reportEndpoint:(id)arg3 sourceDescription:(id)arg4 purchaser:(id)arg5 eventMessage:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)purchaser;
- (id)reportEndpoint;
- (id)sourceDescription;
- (unsigned char)sourceIdentifier;

@end
