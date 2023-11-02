
@interface CTSimDeactivationEvent : NSObject <IDSCTSimDeactivationEvent, NSSecureCoding> {
    bool  _isNetworkInitiated;
    bool  _isRoaming;
    NSString * _networkPlmn;
    NSString * _rat;
    NSString * _reasonCode;
    unsigned long long  _sourceType;
    long long  _timeOfEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isNetworkInitiated;
@property (nonatomic) bool isNetworkInitiated;
@property (nonatomic, readonly) bool isRoaming;
@property (nonatomic) bool isRoaming;
@property (nonatomic, readonly) NSString *networkPlmn;
@property (nonatomic, retain) NSString *networkPlmn;
@property (nonatomic, readonly) NSString *rat;
@property (nonatomic, retain) NSString *rat;
@property (nonatomic, retain) NSString *reasonCode;
@property (nonatomic, readonly) NSString *reasonCode;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long timeOfEvent;
@property (nonatomic) long long timeOfEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNetworkInitiated;
- (bool)isRoaming;
- (id)networkPlmn;
- (id)rat;
- (id)reasonCode;
- (void)setIsNetworkInitiated:(bool)arg1;
- (void)setIsRoaming:(bool)arg1;
- (void)setNetworkPlmn:(id)arg1;
- (void)setRat:(id)arg1;
- (void)setReasonCode:(id)arg1;
- (void)setSourceType:(unsigned long long)arg1;
- (void)setTimeOfEvent:(long long)arg1;
- (unsigned long long)sourceType;
- (long long)timeOfEvent;

@end
