
@interface HMAudioAnalysisEventBulletin : NSObject <HMFLogging, HMFObject> {
    NSUUID * _accessoryIdentifier;
    NSDate * _dateOfOccurrence;
    NSUUID * _homeIdentifier;
    unsigned long long  _reason;
    NSDate * _startDate;
    unsigned long long  _state;
}

@property (readonly, copy) NSUUID *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *homeIdentifier;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) unsigned long long reason;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSDate *startDate;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;

+ (id)initWithProto:(id)arg1;
+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)accessoryIdentifier;
- (id)attributeDescriptions;
- (id)dateOfOccurrence;
- (id)description;
- (id)homeIdentifier;
- (id)initWithAccessoryIdentifier:(id)arg1 homeIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 reason:(unsigned long long)arg5 state:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (id)proto;
- (unsigned long long)reason;
- (id)shortDescription;
- (id)startDate;
- (unsigned long long)state;

@end
