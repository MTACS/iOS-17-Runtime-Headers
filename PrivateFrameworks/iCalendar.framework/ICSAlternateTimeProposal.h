
@interface ICSAlternateTimeProposal : ICSProperty

@property (nonatomic, retain) ICSDateTimeValue *startDate;
@property (nonatomic) int status;

+ (id)ICSStringFromAlternateTimeProposalStatus:(int)arg1;
+ (id)_parseICSString:(id)arg1;
+ (id)alternateTimeProposalFromICSCString:(id)arg1;
+ (int)statusFromICSString:(id)arg1;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)setStartDate:(id)arg1;
- (void)setStatus:(int)arg1;
- (id)startDate;
- (int)status;

@end
