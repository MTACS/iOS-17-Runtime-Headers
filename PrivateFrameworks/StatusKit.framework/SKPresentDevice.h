
@interface SKPresentDevice : NSObject <NSSecureCoding> {
    NSDate * _assertionTime;
    NSString * _deviceIdentifier;
    NSString * _deviceTokenURI;
    SKHandle * _handle;
    bool  _isSelfDevice;
    bool  _isSelfHandle;
    SKPresencePayload * _presencePayload;
}

@property (nonatomic, readonly) NSDate *assertionTime;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) NSString *deviceTokenURI;
@property (nonatomic, readonly) SKHandle *handle;
@property (nonatomic, readonly) bool isSelfDevice;
@property (nonatomic, readonly) bool isSelfHandle;
@property (nonatomic, readonly) SKPresencePayload *presencePayload;
@property (nonatomic, readonly) NSDictionary *presencePayloadDictionary;

// Image: /System/Library/PrivateFrameworks/StatusKit.framework/StatusKit

+ (id)logger;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assertionTime;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (id)deviceTokenURI;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1 deviceIdentifier:(id)arg2 deviceTokenURI:(id)arg3 payload:(id)arg4 assertionTime:(id)arg5 selfHandle:(bool)arg6 selfDevice:(bool)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isSelfDevice;
- (bool)isSelfHandle;
- (id)presencePayload;

// Image: /System/Library/PrivateFrameworks/CopresenceCore.framework/CopresenceCore

- (id)presencePayloadDictionary;

@end
