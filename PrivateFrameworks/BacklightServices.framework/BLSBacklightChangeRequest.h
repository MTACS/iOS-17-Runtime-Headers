
@interface BLSBacklightChangeRequest : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    NSString * _explanation;
    long long  _requestedActivityState;
    long long  _sourceEvent;
    BLSBacklightChangeSourceEventMetadata * _sourceEventMetadata;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *explanation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long requestedActivityState;
@property (nonatomic, readonly) long long sourceEvent;
@property (nonatomic, readonly) BLSBacklightChangeSourceEventMetadata *sourceEventMetadata;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)explanation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestedActivityState:(long long)arg1 explanation:(id)arg2 timestamp:(unsigned long long)arg3 sourceEvent:(long long)arg4 sourceEventMetadata:(id)arg5;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)requestedActivityState;
- (long long)sourceEvent;
- (id)sourceEventMetadata;
- (unsigned long long)timestamp;

@end
