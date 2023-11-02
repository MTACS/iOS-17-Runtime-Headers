
@interface SMSuggestion : NSObject <NSSecureCoding> {
    SMContactInformation * _buddy;
    NSDate * _creationDate;
    NSDateInterval * _dateInterval;
    RTLocation * _destinationLocation;
    RTLocationOfInterest * _locationOfInterest;
    unsigned long long  _sessionType;
    RTLocation * _sourceLocation;
    unsigned long long  _suggestionTrigger;
    unsigned long long  _suggestionUserType;
    unsigned long long  _suppressionReason;
}

@property (nonatomic, readonly, copy) SMContactInformation *buddy;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly, copy) RTLocation *destinationLocation;
@property (nonatomic, readonly) bool isSuppressed;
@property (nonatomic, readonly) RTLocationOfInterest *locationOfInterest;
@property (nonatomic, readonly) unsigned long long sessionType;
@property (nonatomic, readonly, copy) RTLocation *sourceLocation;
@property (nonatomic, readonly) unsigned long long suggestionTrigger;
@property (nonatomic, readonly) unsigned long long suggestionUserType;
@property (nonatomic) unsigned long long suppressionReason;

+ (id)stringFromSMSuggestionSuppressionReason:(unsigned long long)arg1;
+ (id)stringFromSMSuggestionTrigger:(unsigned long long)arg1;
+ (id)stringFromSMSuggestionUserType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buddy;
- (id)creationDate;
- (id)dateInterval;
- (id)description;
- (id)destinationLocation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestionTrigger:(unsigned long long)arg1 suggestionUserType:(unsigned long long)arg2 suppressionReason:(unsigned long long)arg3 sessionType:(unsigned long long)arg4 sourceLocation:(id)arg5 destinationLocation:(id)arg6 buddy:(id)arg7 dateInterval:(id)arg8 creationDate:(id)arg9;
- (id)initWithSuggestionTrigger:(unsigned long long)arg1 suggestionUserType:(unsigned long long)arg2 suppressionReason:(unsigned long long)arg3 sessionType:(unsigned long long)arg4 sourceLocation:(id)arg5 destinationLocation:(id)arg6 buddy:(id)arg7 dateInterval:(id)arg8 creationDate:(id)arg9 locationOfInterest:(id)arg10;
- (bool)isEqual:(id)arg1;
- (bool)isSuppressed;
- (id)locationOfInterest;
- (unsigned long long)sessionType;
- (void)setSuppressionReason:(unsigned long long)arg1;
- (id)sourceLocation;
- (unsigned long long)suggestionTrigger;
- (unsigned long long)suggestionUserType;
- (unsigned long long)suppressionReason;

@end
