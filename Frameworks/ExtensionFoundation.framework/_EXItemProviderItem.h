
@interface _EXItemProviderItem : NSObject <NSSecureCoding> {
    NSCoder * _encodedPayload;
    NSError * _error;
    <NSObject><NSSecureCoding> * _payload;
    NSUUID * _payloadIdentifier;
    NSString * _typeIdentifier;
}

@property (retain) NSCoder *encodedPayload;
@property (readonly) NSError *error;
@property (readonly) <NSObject><NSSecureCoding> *payload;
@property (readonly) NSUUID *payloadIdentifier;
@property (readonly) NSString *typeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedPayload;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeIdentifier:(id)arg1 error:(id)arg2;
- (id)initWithTypeIdentifier:(id)arg1 payload:(id)arg2;
- (id)payload;
- (id)payloadIdentifier;
- (id)payloadOfClass:(Class)arg1;
- (id)payloadOfClasses:(id)arg1;
- (void)setEncodedPayload:(id)arg1;
- (id)typeIdentifier;

@end
