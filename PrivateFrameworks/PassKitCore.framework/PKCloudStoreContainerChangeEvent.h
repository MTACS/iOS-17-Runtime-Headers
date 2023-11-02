
@interface PKCloudStoreContainerChangeEvent : NSObject <NSCopying, NSSecureCoding> {
    NSString * _beginIntervalEventIdentifier;
    NSData * _changeToken;
    unsigned long long  _changeType;
    NSString * _containerIdentifier;
    NSString * _errorDescription;
    unsigned long long  _eventType;
    NSString * _identifier;
    NSArray * _objectNames;
    NSString * _operationGroupName;
    NSString * _operationGroupNameSuffix;
    NSString * _stateName;
    double  _timeInterval;
    NSDate * _timestamp;
}

@property (nonatomic, copy) NSString *beginIntervalEventIdentifier;
@property (nonatomic, copy) NSData *changeToken;
@property (nonatomic) unsigned long long changeType;
@property (nonatomic, copy) NSString *containerIdentifier;
@property (nonatomic, copy) NSString *errorDescription;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *objectNames;
@property (nonatomic, copy) NSString *operationGroupName;
@property (nonatomic, copy) NSString *operationGroupNameSuffix;
@property (nonatomic, copy) NSString *stateName;
@property (nonatomic) double timeInterval;
@property (nonatomic, retain) NSDate *timestamp;

+ (id)_csvSafeString:(id)arg1;
+ (id)_csvSafeStringForEvent:(id)arg1;
+ (id)_dateFormatter;
+ (id)csvStringForEvents:(id)arg1;
+ (id)intervalBeginEventWithType:(unsigned long long)arg1 containerIdentifier:(id)arg2 stateName:(id)arg3 objectNames:(id)arg4 error:(id)arg5 changeToken:(id)arg6 operationGroupName:(id)arg7 operationGroupNameSuffix:(id)arg8;
+ (id)intervalEndEventWithBeginUniqueIdentifier:(id)arg1 error:(id)arg2;
+ (void)populateEndIntervalEvent:(id)arg1 withBeginIntervalEvent:(id)arg2;
+ (id)signpostEventWithType:(unsigned long long)arg1 containerIdentifier:(id)arg2 stateName:(id)arg3 objectNames:(id)arg4 error:(id)arg5 changeToken:(id)arg6 operationGroupName:(id)arg7 operationGroupNameSuffix:(id)arg8;
+ (bool)supportsSecureCoding;
+ (id)writeCSVFileForEvents:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)beginIntervalEventIdentifier;
- (id)changeToken;
- (unsigned long long)changeType;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)errorDescription;
- (unsigned long long)eventType;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithChangeType:(unsigned long long)arg1 beginUniqueIdentifier:(id)arg2 error:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(unsigned long long)arg1 changeType:(unsigned long long)arg2 containerIdentifier:(id)arg3 beginUniqueIdentifier:(id)arg4 stateName:(id)arg5 objectNames:(id)arg6 error:(id)arg7 changeToken:(id)arg8 operationGroupName:(id)arg9 operationGroupNameSuffix:(id)arg10;
- (bool)isEqual:(id)arg1;
- (id)objectNames;
- (id)operationGroupName;
- (id)operationGroupNameSuffix;
- (void)setBeginIntervalEventIdentifier:(id)arg1;
- (void)setChangeToken:(id)arg1;
- (void)setChangeType:(unsigned long long)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setEventType:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setObjectNames:(id)arg1;
- (void)setOperationGroupName:(id)arg1;
- (void)setOperationGroupNameSuffix:(id)arg1;
- (void)setStateName:(id)arg1;
- (void)setTimeInterval:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (id)stateName;
- (double)timeInterval;
- (id)timestamp;

@end
