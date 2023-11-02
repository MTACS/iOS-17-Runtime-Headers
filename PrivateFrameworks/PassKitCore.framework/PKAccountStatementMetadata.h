
@interface PKAccountStatementMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountIdentifier;
    unsigned long long  _accountType;
    NSDate * _closingDate;
    bool  _hasBeenProcessed;
    NSArray * _items;
    NSDate * _lastReportDate;
    NSDate * _openingDate;
    long long  _reportCount;
    NSString * _statementIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) unsigned long long accountType;
@property (nonatomic, copy) NSDate *closingDate;
@property (nonatomic) bool hasBeenProcessed;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSDate *lastReportDate;
@property (nonatomic, copy) NSDate *openingDate;
@property (nonatomic) long long reportCount;
@property (nonatomic, copy) NSString *statementIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (unsigned long long)accountType;
- (id)closingDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBeenProcessed;
- (unsigned long long)hash;
- (id)initWithArray:(id)arg1 accountIdentifier:(id)arg2 statementIdentifier:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)itemsMissingFromDevice;
- (id)lastReportDate;
- (id)openingDate;
- (long long)reportCount;
- (id)reportForMissingItems;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountType:(unsigned long long)arg1;
- (void)setClosingDate:(id)arg1;
- (void)setHasBeenProcessed:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setLastReportDate:(id)arg1;
- (void)setOpeningDate:(id)arg1;
- (void)setReportCount:(long long)arg1;
- (void)setStatementIdentifier:(id)arg1;
- (id)statementIdentifier;

@end
