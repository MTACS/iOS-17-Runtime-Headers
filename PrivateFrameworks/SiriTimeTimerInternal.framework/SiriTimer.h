
@interface SiriTimer : INObject

@property (nonatomic, retain) SiriDevice *device;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, copy) NSDate *fireDate;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) NSNumber *remainingTime;
@property (nonatomic, retain) NSNumber *shouldMatchAny;
@property (nonatomic, retain) NSNumber *shouldMatchRemote;
@property (nonatomic) long long state;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
