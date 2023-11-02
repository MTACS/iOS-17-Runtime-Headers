
@interface CTPNRRequestType : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _attemptCount;
    NSArray * _pnrReqList;
    NSData * _pushToken;
}

@property (nonatomic, retain) NSNumber *attemptCount;
@property (nonatomic, retain) NSArray *pnrReqList;
@property (nonatomic, retain) NSData *pushToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attemptCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTPNRRequestType:(id)arg1;
- (id)pnrReqList;
- (id)pushToken;
- (void)setAttemptCount:(id)arg1;
- (void)setPnrReqList:(id)arg1;
- (void)setPushToken:(id)arg1;

@end
