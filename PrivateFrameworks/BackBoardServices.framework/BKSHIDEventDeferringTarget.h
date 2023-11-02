
@interface BKSHIDEventDeferringTarget : NSObject <BSDescriptionStreamable, BSProtobufSerializable, NSCopying, NSMutableCopying, NSSecureCoding> {
    int  _pid;
    BKSHIDEventDeferringToken * _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) BKSHIDEventDeferringToken *token;

+ (id)protobufSchema;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPID:(int)arg1 token:(id)arg2;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)pid;
- (id)token;

@end
