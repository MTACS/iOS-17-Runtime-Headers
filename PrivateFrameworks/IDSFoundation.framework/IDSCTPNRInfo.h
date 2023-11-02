
@interface IDSCTPNRInfo : NSObject {
    NSString * _IMSI;
    NSString * _PLMN;
    NSString * _PNRPhoneNumber;
    NSString * _phoneBookNumber;
}

@property (nonatomic, retain) NSString *IMSI;
@property (nonatomic, retain) NSString *PLMN;
@property (nonatomic, retain) NSString *PNRPhoneNumber;
@property (nonatomic, retain) NSString *phoneBookNumber;

- (void).cxx_destruct;
- (id)IMSI;
- (id)PLMN;
- (id)PNRPhoneNumber;
- (id)initWithIMSI:(id)arg1 PLMN:(id)arg2 PNRPhoneNumber:(id)arg3 phoneBookNumber:(id)arg4;
- (id)phoneBookNumber;
- (void)setIMSI:(id)arg1;
- (void)setPLMN:(id)arg1;
- (void)setPNRPhoneNumber:(id)arg1;
- (void)setPhoneBookNumber:(id)arg1;

@end
