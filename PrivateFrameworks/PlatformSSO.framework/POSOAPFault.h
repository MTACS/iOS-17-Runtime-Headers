
@interface POSOAPFault : NSObject <POXSDefinitionProvider> {
    POSOAPCode * _Code;
    POSOAPReason * _Reason;
    POSOAPFaultDetail * _detail;
    NSString * _faultactor;
    NSString * _faultcode;
    NSString * _faultstring;
}

@property (nonatomic, retain) POSOAPCode *Code;
@property (nonatomic, retain) POSOAPReason *Reason;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) POSOAPFaultDetail *detail;
@property (nonatomic, copy) NSString *faultactor;
@property (nonatomic, copy) NSString *faultcode;
@property (nonatomic, copy) NSString *faultstring;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)definition;

- (void).cxx_destruct;
- (id)Code;
- (id)Reason;
- (id)description;
- (id)detail;
- (id)faultactor;
- (id)faultcode;
- (id)faultstring;
- (void)setCode:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setFaultactor:(id)arg1;
- (void)setFaultcode:(id)arg1;
- (void)setFaultstring:(id)arg1;
- (void)setReason:(id)arg1;

@end
