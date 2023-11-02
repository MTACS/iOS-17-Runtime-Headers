
@interface PHUserFeedback : NSObject <NSCopying, NSSecureCoding> {
    NSString * _context;
    unsigned long long  _creationType;
    unsigned long long  _feature;
    NSDate * _lastModifiedDate;
    unsigned long long  _type;
    NSString * _uuid;
}

@property (readonly, copy) NSString *context;
@property (readonly) unsigned long long creationType;
@property (readonly) unsigned long long feature;
@property (readonly, copy) NSDate *lastModifiedDate;
@property (readonly) unsigned long long type;
@property (readonly) NSString *uuid;

+ (id)_contextForMemoryFeature:(id)arg1;
+ (id)_contextForSongIdentifiers:(id)arg1;
+ (unsigned long long)_feedbackFeatureForMemoryFeature:(id)arg1;
+ (unsigned long long)mergeFeedbackType:(unsigned long long)arg1 withOtherFeedbackType:(unsigned long long)arg2;
+ (id)negativeAutonamingUserFeedbackForPerson:(id)arg1 rejectedContactIdentifier:(id)arg2;
+ (id)negativeAutonamingUserFeedbackForPerson:(id)arg1 rejectedName:(id)arg2;
+ (id)negativeUserFeedbackForMemoryFeature:(id)arg1 existingFeedback:(id)arg2;
+ (id)negativeUserFeedbackForMemoryMusicWithSongIdentifier:(id)arg1 existingFeedback:(id)arg2;
+ (id)negativeUserFeedbackForPerson:(id)arg1;
+ (unsigned long long)sumFeedbackType:(unsigned long long)arg1 withOtherFeedbackType:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)contextAsDateIntervalWithError:(id*)arg1;
- (id)contextAsDateWithError:(id*)arg1;
- (id)contextAsListOfSongIdentifiersWithError:(id*)arg1;
- (id)contextAsLocationWithError:(id*)arg1;
- (id)contextAsStringWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)creationType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)feature;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 feature:(unsigned long long)arg2 context:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 feature:(unsigned long long)arg2 context:(id)arg3 lastModifiedDate:(id)arg4;
- (id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 feature:(unsigned long long)arg3 creationType:(unsigned long long)arg4 context:(id)arg5 lastModifiedDate:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualWithoutUUID:(id)arg1;
- (id)lastModifiedDate;
- (unsigned long long)type;
- (id)uuid;

@end
