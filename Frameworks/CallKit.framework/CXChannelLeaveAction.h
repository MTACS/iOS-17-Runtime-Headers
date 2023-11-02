
@interface CXChannelLeaveAction : CXChannelAction <CXCopying> {
    NSDate * _leaveDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *leaveDate;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (void)fulfill;
- (void)fulfillWithLeaveDate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)leaveDate;
- (void)setLeaveDate:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
