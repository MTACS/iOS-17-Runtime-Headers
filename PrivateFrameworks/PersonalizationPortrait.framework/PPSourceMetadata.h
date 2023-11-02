
@interface PPSourceMetadata : NSObject <MLFeatureProvider, NSCopying, NSSecureCoding> {
    unsigned short  _contactHandleCount;
    unsigned short  _donationCount;
    unsigned int  _dwellTimeSeconds;
    unsigned char  _flags;
    unsigned int  _lengthCharacters;
    unsigned int  _lengthSeconds;
}

@property (nonatomic, readonly) unsigned short contactHandleCount;
@property (nonatomic, readonly) unsigned short donationCount;
@property (nonatomic, readonly) unsigned int dwellTimeSeconds;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, readonly) unsigned char flags;
@property (nonatomic, readonly) unsigned int lengthCharacters;
@property (nonatomic, readonly) unsigned int lengthSeconds;

+ (bool)supportsSecureCoding;

- (unsigned short)contactHandleCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned short)donationCount;
- (unsigned int)dwellTimeSeconds;
- (void)encodeWithCoder:(id)arg1;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (unsigned char)flags;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDwellTimeSeconds:(unsigned int)arg1 lengthSeconds:(unsigned int)arg2 lengthCharacters:(unsigned int)arg3 donationCount:(unsigned short)arg4 contactHandleCount:(unsigned short)arg5 flags:(unsigned char)arg6;
- (id)initWithFlags:(unsigned char)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSourceMetadata:(id)arg1;
- (unsigned int)lengthCharacters;
- (unsigned int)lengthSeconds;

@end
