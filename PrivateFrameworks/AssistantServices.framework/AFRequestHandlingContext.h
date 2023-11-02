
@interface AFRequestHandlingContext : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSString * _inputAssistantID;
    NSString * _inputDeviceID;
    NSString * _requestID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *inputAssistantID;
@property (nonatomic, readonly, copy) NSString *inputDeviceID;
@property (nonatomic, readonly, copy) NSString *requestID;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithRequestID:(id)arg1 inputDeviceID:(id)arg2 inputAssistantID:(id)arg3;
- (id)inputAssistantID;
- (id)inputDeviceID;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)requestID;

@end
