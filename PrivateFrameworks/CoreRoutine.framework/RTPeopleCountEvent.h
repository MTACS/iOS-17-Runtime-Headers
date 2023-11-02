
@interface RTPeopleCountEvent : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    NSUUID * _eventID;
    unsigned long long  _familyCount;
    unsigned long long  _friendsCount;
    NSDate * _startDate;
    unsigned long long  _totalCount;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSUUID *eventID;
@property (nonatomic, readonly) unsigned long long familyCount;
@property (nonatomic, readonly) unsigned long long friendsCount;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) unsigned long long totalCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)eventID;
- (unsigned long long)familyCount;
- (unsigned long long)friendsCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 totalCount:(unsigned long long)arg4 familyCount:(unsigned long long)arg5 friendsCount:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (id)startDate;
- (unsigned long long)totalCount;

@end
