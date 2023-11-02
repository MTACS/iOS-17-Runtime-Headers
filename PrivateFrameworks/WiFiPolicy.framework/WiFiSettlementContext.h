
@interface WiFiSettlementContext : NSObject {
    NSDate * _creationDate;
    unsigned long long  _maxCount;
    NSSet * _strongestBSSIDs;
    NSArray * _strongestNetworks;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic, retain) NSSet *strongestBSSIDs;
@property (nonatomic, retain) NSArray *strongestNetworks;

+ (bool)networkQualifiesForSettlement:(id)arg1;

- (void).cxx_destruct;
- (void)_updateStrongestNetworks:(id)arg1;
- (bool)compareWithScanResults:(id)arg1;
- (id)creationDate;
- (id)initWithNetworks:(id)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)maxCount;
- (void)setCreationDate:(id)arg1;
- (void)setMaxCount:(unsigned long long)arg1;
- (void)setStrongestBSSIDs:(id)arg1;
- (void)setStrongestNetworks:(id)arg1;
- (id)strongestBSSIDs;
- (id)strongestNetworks;
- (void)updateNetworks:(id)arg1;

@end
