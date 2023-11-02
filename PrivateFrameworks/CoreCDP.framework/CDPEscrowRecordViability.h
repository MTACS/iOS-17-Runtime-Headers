
@interface CDPEscrowRecordViability : NSObject <CDPInitUnavailable, NSCopying, NSSecureCoding> {
    bool  _hasMachineId;
    bool  _hasRecords;
    unsigned long long  _pcsRecoveryViability;
    unsigned long long  _recordViability;
    unsigned long long  _sosViability;
    unsigned long long  _tlkRecoveryViability;
}

@property (nonatomic) bool hasMachineId;
@property (nonatomic, readonly) bool hasRecords;
@property (nonatomic, readonly) unsigned long long pcsRecoveryViability;
@property (nonatomic, readonly) unsigned long long recordViability;
@property (nonatomic, readonly) unsigned long long sosViability;
@property (nonatomic, readonly) unsigned long long tlkRecoveryViability;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMachineId;
- (bool)hasRecords;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordPresence:(bool)arg1 hasMachineId:(bool)arg2 recordViability:(unsigned long long)arg3 tlkRecoveryViability:(unsigned long long)arg4 sosViability:(unsigned long long)arg5 pcsRecoveryViability:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (unsigned long long)pcsRecoveryViability;
- (unsigned long long)recordViability;
- (void)setHasMachineId:(bool)arg1;
- (unsigned long long)sosViability;
- (unsigned long long)tlkRecoveryViability;

@end
