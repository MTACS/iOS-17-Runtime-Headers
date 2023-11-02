
@interface CLMiLoPlaceLabel : NSObject <NSCopying, NSSecureCoding> {
    NSString * _placeAdditionalInformation;
    NSUUID * _placeIdentifier;
}

@property (nonatomic, readonly) NSString *placeAdditionalInformation;
@property (nonatomic, readonly) NSUUID *placeIdentifier;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaceIdentifier:(id)arg1 placeAdditionalInformation:(id)arg2;
- (id)placeAdditionalInformation;
- (id)placeIdentifier;

@end
