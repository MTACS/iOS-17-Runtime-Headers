
@interface OBPrivacyFlowGroup : NSObject {
    NSString * _identifier;
    NSArray * _privacyFlows;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSArray *privacyFlows;

+ (id)groupFlowsByCombinedHeader:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 privacyFlows:(id)arg2;
- (id)privacyFlows;
- (void)setIdentifier:(id)arg1;
- (void)setPrivacyFlows:(id)arg1;

@end
