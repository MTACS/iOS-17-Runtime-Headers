
@interface DACarKeyGenericCrossPlatformSharingData : NSObject <NSCopying, NSSecureCoding> {
    NSString * _friendKeyIdentifier;
    NSData * _message;
    long long  _messageType;
    NSString * _sharingIdentifier;
}

@property (nonatomic, readonly) NSString *friendKeyIdentifier;
@property (nonatomic, readonly) NSData *message;
@property (nonatomic, readonly) long long messageType;
@property (nonatomic, readonly) NSString *sharingIdentifier;

+ (id)decodeWithData:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encodeWithError:(id*)arg1;
- (id)friendKeyIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSharingIdentifier:(id)arg1 friendKeyIdentifier:(id)arg2 sharingMessageType:(long long)arg3 message:(id)arg4;
- (id)message;
- (long long)messageType;
- (id)sharingIdentifier;

@end
