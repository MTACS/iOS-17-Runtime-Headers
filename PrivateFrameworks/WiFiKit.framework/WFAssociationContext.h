
@interface WFAssociationContext : NSObject {
    NSDate * _associationStart;
    NSObject<WFNetworkListRecord> * _network;
    unsigned long long  _originator;
    bool  _secondaryScanCompleted;
    NSDictionary * _sectionCounts;
    NSString * _sectionNameJoined;
    unsigned long long  _state;
}

@property (nonatomic, retain) NSDate *associationStart;
@property (nonatomic, retain) NSObject<WFNetworkListRecord> *network;
@property (nonatomic) unsigned long long originator;
@property (nonatomic, readonly) NSString *originatorDescription;
@property (nonatomic) bool secondaryScanCompleted;
@property (nonatomic, copy) NSDictionary *sectionCounts;
@property (nonatomic, copy) NSString *sectionNameJoined;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) NSString *stateDescription;

- (void).cxx_destruct;
- (id)associationStart;
- (id)description;
- (id)formattedStartDate;
- (id)initWithNetwork:(id)arg1;
- (id)network;
- (id)networkName;
- (unsigned long long)originator;
- (id)originatorDescription;
- (bool)secondaryScanCompleted;
- (id)sectionCounts;
- (id)sectionNameJoined;
- (void)setAssociationStart:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setOriginator:(unsigned long long)arg1;
- (void)setSecondaryScanCompleted:(bool)arg1;
- (void)setSectionCounts:(id)arg1;
- (void)setSectionNameJoined:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (id)stateDescription;

@end
