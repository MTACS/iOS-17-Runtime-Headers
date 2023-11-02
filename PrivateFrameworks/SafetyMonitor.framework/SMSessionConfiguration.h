
@interface SMSessionConfiguration : NSObject <NSCopying, NSSecureCoding> {
    SMSessionDestination * _destination;
    SMHandle * _handle;
    NSUUID * _sessionID;
    NSDate * _sessionStartDate;
    bool  _sessionSupportsHandoff;
    unsigned long long  _sessionType;
    SMSessionTime * _time;
    NSDate * _userResponseSafeDate;
}

@property (nonatomic, readonly) SMSessionDestination *destination;
@property (nonatomic, readonly) SMHandle *handle;
@property (nonatomic, readonly) NSUUID *sessionID;
@property (nonatomic, readonly) NSDate *sessionStartDate;
@property (nonatomic) bool sessionSupportsHandoff;
@property (nonatomic, readonly) unsigned long long sessionType;
@property (nonatomic, readonly) SMSessionTime *time;
@property (nonatomic, readonly) NSDate *userResponseSafeDate;

+ (bool)configurationIsValid:(id)arg1;
+ (id)sessionTypeToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initDestinationBoundSessionConfigurationWithHandle:(id)arg1 sessionID:(id)arg2 destination:(id)arg3 sessionStartDate:(id)arg4 userResponseSafeDate:(id)arg5 sessionSupportsHandoff:(bool)arg6;
- (id)initRoundTripSessionConfigurationWithHandle:(id)arg1 sessionID:(id)arg2 destination:(id)arg3 sessionStartDate:(id)arg4 userResponseSafeDate:(id)arg5 sessionSupportsHandoff:(bool)arg6;
- (id)initTimeBoundSessionConfigurationWithHandle:(id)arg1 sessionID:(id)arg2 time:(id)arg3 sessionStartDate:(id)arg4 sessionSupportsHandoff:(bool)arg5;
- (id)initTimeBoundSessionConfigurationWithHandle:(id)arg1 sessionID:(id)arg2 time:(id)arg3 sessionSupportsHandoff:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHandle:(id)arg1 sessionID:(id)arg2 sessionStartDate:(id)arg3 sessionType:(unsigned long long)arg4 time:(id)arg5 destination:(id)arg6 userResponseSafeDate:(id)arg7 sessionSupportsHandoff:(bool)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isSimilar:(id)arg1;
- (id)outputToDictionary;
- (id)sessionID;
- (id)sessionStartDate;
- (bool)sessionSupportsHandoff;
- (unsigned long long)sessionType;
- (void)setSessionSupportsHandoff:(bool)arg1;
- (id)time;
- (id)userResponseSafeDate;

@end
