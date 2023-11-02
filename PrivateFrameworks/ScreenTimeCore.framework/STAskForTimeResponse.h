
@interface STAskForTimeResponse : NSObject <NSSecureCoding> {
    NSNumber * _amountGranted;
    long long  _answer;
    NSUUID * _associatedRequestIdentifier;
    NSNumber * _respondingUserDSID;
    NSDate * _timeStamp;
}

@property (nonatomic, retain) NSNumber *amountGranted;
@property (nonatomic) long long answer;
@property (nonatomic, retain) NSUUID *associatedRequestIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *payload;
@property (nonatomic, retain) NSNumber *respondingUserDSID;
@property (nonatomic, retain) NSDate *timeStamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amountGranted;
- (long long)answer;
- (id)associatedRequestIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (id)payload;
- (id)respondingUserDSID;
- (void)setAmountGranted:(id)arg1;
- (void)setAnswer:(long long)arg1;
- (void)setAssociatedRequestIdentifier:(id)arg1;
- (void)setRespondingUserDSID:(id)arg1;
- (void)setTimeStamp:(id)arg1;
- (id)timeStamp;

@end
