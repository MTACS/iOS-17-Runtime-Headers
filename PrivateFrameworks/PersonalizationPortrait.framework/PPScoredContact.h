
@interface PPScoredContact : NSObject <NSCopying, NSSecureCoding> {
    PPContact * _contact;
    unsigned char  _flags;
    double  _score;
    NSArray * _scoredEmailAddresses;
    NSArray * _scoredPhoneNumbers;
    NSArray * _scoredPostalAddresses;
    NSArray * _scoredSocialProfiles;
}

@property (nonatomic, readonly) PPContact *contact;
@property (nonatomic, readonly) unsigned char flags;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSArray *scoredEmailAddresses;
@property (nonatomic, readonly) NSArray *scoredPhoneNumbers;
@property (nonatomic, readonly) NSArray *scoredPostalAddresses;
@property (nonatomic, readonly) NSArray *scoredSocialProfiles;

+ (id)scoredContactWithContact:(id)arg1 scoredPhoneNumbers:(id)arg2 scoredEmailAddresses:(id)arg3 scoredSocialProfiles:(id)arg4 scoredPostalAddresses:(id)arg5 score:(double)arg6 flags:(unsigned char)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)flags;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 scoredPhoneNumbers:(id)arg2 scoredEmailAddresses:(id)arg3 scoredSocialProfiles:(id)arg4 scoredPostalAddresses:(id)arg5 score:(double)arg6 flags:(unsigned char)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScoredContact:(id)arg1;
- (long long)reverseCompare:(id)arg1;
- (double)score;
- (id)scoredEmailAddresses;
- (id)scoredPhoneNumbers;
- (id)scoredPostalAddresses;
- (id)scoredSocialProfiles;

@end
