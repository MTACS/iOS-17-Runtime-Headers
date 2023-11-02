
@interface DACarKeySharingMessage : NSObject <NSCopying, NSSecureCoding> {
    DACarKeyAdditionalCrossPlatformSharingData * _additionalData;
    DACarKeyGenericCrossPlatformSharingData * _genericData;
    DACarKeyPrivateCrossPlatformSharingData * _privateData;
}

@property (nonatomic, readonly) DACarKeyAdditionalCrossPlatformSharingData *additionalData;
@property (nonatomic, readonly) DACarKeyGenericCrossPlatformSharingData *genericData;
@property (nonatomic, readonly) DACarKeyPrivateCrossPlatformSharingData *privateData;

+ (id)decodeWithData:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encodeWithError:(id*)arg1;
- (id)genericData;
- (id)initWithCoder:(id)arg1;
- (id)initWithGenericCrossPlatformSharingData:(id)arg1 additionalData:(id)arg2 privateData:(id)arg3;
- (id)initWithGenericCrossPlatformSharingData:(id)arg1 additionalDataDictionary:(id)arg2;
- (id)initWithGenericDataDictionary:(id)arg1 additionalDataDictionary:(id)arg2;
- (id)privateData;

@end
