
@interface NFVASRequest : NSObject {
    NSData * _filter;
    NSString * _merchantId;
    NSURL * _signupUrl;
    NSNumber * _terminalCap;
    NSNumber * _terminalProtocol;
}

@property (nonatomic, retain) NSData *filter;
@property (nonatomic, retain) NSString *merchantId;
@property (nonatomic, retain) NSURL *signupUrl;
@property (nonatomic, retain) NSNumber *terminalCap;
@property (nonatomic, retain) NSNumber *terminalProtocol;

+ (bool)validateDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)description;
- (id)filter;
- (id)initWithDictionary:(id)arg1;
- (id)merchantId;
- (void)setFilter:(id)arg1;
- (void)setMerchantId:(id)arg1;
- (void)setSignupUrl:(id)arg1;
- (void)setTerminalCap:(id)arg1;
- (void)setTerminalProtocol:(id)arg1;
- (id)signupUrl;
- (id)terminalCap;
- (id)terminalProtocol;

@end
