
@interface HDTMockCMNatalieData : CMNatalieData {
    double  _active;
    double  _basal;
    NSDate * _date;
    double  _mets;
    long long  _recordID;
    NSUUID * _source;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)basalNatalies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 mets:(double)arg2 active:(double)arg3 basal:(double)arg4 recordID:(long long)arg5 source:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)mets;
- (id)natalies;
- (long long)recordId;
- (id)sourceId;
- (id)startDate;

@end
