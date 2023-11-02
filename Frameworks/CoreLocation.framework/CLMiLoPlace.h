
@interface CLMiLoPlace : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _confidence;
    NSUUID * _identifier;
    CLMiLoPlaceMetadata * _metadata;
    NSNumber * _score;
}

@property (nonatomic, readonly) unsigned long long confidence;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) CLMiLoPlaceMetadata *metadata;
@property (nonatomic, readonly) NSNumber *score;

+ (bool)supportsSecureCoding;

- (unsigned long long)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaceIdentifier:(id)arg1 score:(id)arg2 confidence:(unsigned long long)arg3 placeMetadata:(id)arg4;
- (id)metadata;
- (id)score;

@end
