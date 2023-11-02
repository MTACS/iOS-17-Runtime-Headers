
@interface PKAccountStatementMetadataItem : NSObject <NSCopying, NSSecureCoding> {
    long long  _accountEventType;
    unsigned long long  _error;
    bool  _hasBeenProcessed;
    NSString * _identifier;
    NSDate * _lastProcessedDate;
    NSDate * _lastReportDate;
    NSString * _originatorAltDSID;
    long long  _processedAttemptCount;
    long long  _reportCount;
    unsigned long long  _status;
    unsigned long long  _type;
    NSString * _zoneName;
}

@property (nonatomic) long long accountEventType;
@property (nonatomic) unsigned long long error;
@property (nonatomic) bool hasBeenProcessed;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *lastProcessedDate;
@property (nonatomic) NSDate *lastReportDate;
@property (nonatomic, copy) NSString *originatorAltDSID;
@property (nonatomic) long long processedAttemptCount;
@property (nonatomic) long long reportCount;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long type;
@property (nonatomic, copy) NSString *zoneName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)accountEventType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)error;
- (bool)hasBeenProcessed;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastProcessedDate;
- (id)lastReportDate;
- (id)originatorAltDSID;
- (long long)processedAttemptCount;
- (long long)reportCount;
- (void)setAccountEventType:(long long)arg1;
- (void)setError:(unsigned long long)arg1;
- (void)setHasBeenProcessed:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastProcessedDate:(id)arg1;
- (void)setLastReportDate:(id)arg1;
- (void)setOriginatorAltDSID:(id)arg1;
- (void)setProcessedAttemptCount:(long long)arg1;
- (void)setReportCount:(long long)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setZoneName:(id)arg1;
- (unsigned long long)status;
- (unsigned long long)type;
- (id)zoneName;

@end
