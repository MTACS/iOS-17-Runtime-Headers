
@interface CLMiLoFingerprintMetaInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _errors;
    NSNumber * _numberOfBLESources;
    NSNumber * _numberOfUWBSources;
    NSNumber * _numberOfWiFiAccessPoints;
    NSUUID * _requestIdentifier;
}

@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) NSNumber *numberOfBLESources;
@property (nonatomic, readonly) NSNumber *numberOfUWBSources;
@property (nonatomic, readonly) NSNumber *numberOfWiFiAccessPoints;
@property (nonatomic, readonly) NSUUID *requestIdentifier;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)errors;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumWiFiAccessPoints:(id)arg1 numBLESources:(id)arg2 numUWBSources:(id)arg3 requestIdentifier:(id)arg4 errors:(id)arg5;
- (id)numberOfBLESources;
- (id)numberOfUWBSources;
- (id)numberOfWiFiAccessPoints;
- (id)requestIdentifier;

@end
