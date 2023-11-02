
@interface CTSuppServicesNotificationData : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _active;
    NSNumber * _callBarringFacility;
    NSNumber * _callClass;
    NSNumber * _callForwardingNoReplyTime;
    NSString * _callForwardingNumber;
    NSNumber * _callForwardingReason;
    NSNumber * _callingLineIdRestriction;
    NSNumber * _callingLineIdRestrictionModification;
    NSNumber * _callingLinePresentation;
    NSNumber * _callingNamePresentation;
    NSNumber * _connectedLineIdRestriction;
    NSNumber * _connectedLinePresentation;
    NSNumber * _enabled;
    NSNumber * _mmiProcedure;
    NSNumber * _supplementaryServiceType;
}

@property (nonatomic, retain) NSNumber *active;
@property (nonatomic, retain) NSNumber *callBarringFacility;
@property (nonatomic, retain) NSNumber *callClass;
@property (nonatomic, retain) NSNumber *callForwardingNoReplyTime;
@property (nonatomic, retain) NSString *callForwardingNumber;
@property (nonatomic, retain) NSNumber *callForwardingReason;
@property (nonatomic, retain) NSNumber *callingLineIdRestriction;
@property (nonatomic, retain) NSNumber *callingLineIdRestrictionModification;
@property (nonatomic, retain) NSNumber *callingLinePresentation;
@property (nonatomic, retain) NSNumber *callingNamePresentation;
@property (nonatomic, retain) NSNumber *connectedLineIdRestriction;
@property (nonatomic, retain) NSNumber *connectedLinePresentation;
@property (nonatomic, retain) NSNumber *enabled;
@property (nonatomic, retain) NSNumber *mmiProcedure;
@property (nonatomic, retain) NSNumber *supplementaryServiceType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)active;
- (id)callBarringFacility;
- (id)callClass;
- (id)callForwardingNoReplyTime;
- (id)callForwardingNumber;
- (id)callForwardingReason;
- (id)callingLineIdRestriction;
- (id)callingLineIdRestrictionModification;
- (id)callingLinePresentation;
- (id)callingNamePresentation;
- (id)connectedLineIdRestriction;
- (id)connectedLinePresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mmiProcedure;
- (void)setActive:(id)arg1;
- (void)setCallBarringFacility:(id)arg1;
- (void)setCallClass:(id)arg1;
- (void)setCallForwardingNoReplyTime:(id)arg1;
- (void)setCallForwardingNumber:(id)arg1;
- (void)setCallForwardingReason:(id)arg1;
- (void)setCallingLineIdRestriction:(id)arg1;
- (void)setCallingLineIdRestrictionModification:(id)arg1;
- (void)setCallingLinePresentation:(id)arg1;
- (void)setCallingNamePresentation:(id)arg1;
- (void)setConnectedLineIdRestriction:(id)arg1;
- (void)setConnectedLinePresentation:(id)arg1;
- (void)setEnabled:(id)arg1;
- (void)setMmiProcedure:(id)arg1;
- (void)setSupplementaryServiceType:(id)arg1;
- (id)supplementaryServiceType;

@end
