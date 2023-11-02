
@interface _ICQOpportunityBubbleReportingSpecification : NSObject {
    NSDictionary * _dimissServerParam;
    unsigned long long  _dismissRuleType;
    bool  _displayRuleServerAlwaysShow;
    unsigned long long  _displayRuleType;
}

@property (nonatomic, retain) NSDictionary *dimissServerParam;
@property (nonatomic) unsigned long long dismissRuleType;
@property (nonatomic) bool displayRuleServerAlwaysShow;
@property (nonatomic) unsigned long long displayRuleType;

- (void).cxx_destruct;
- (id)_getDismissReportingRuleFromServerDict:(id)arg1;
- (void)_setDisplayRuleFromServerDict:(id)arg1;
- (id)dimissServerParam;
- (unsigned long long)dismissRuleType;
- (bool)displayRuleServerAlwaysShow;
- (unsigned long long)displayRuleType;
- (id)initWithServerDictionary:(id)arg1;
- (void)setDimissServerParam:(id)arg1;
- (void)setDismissRuleType:(unsigned long long)arg1;
- (void)setDisplayRuleServerAlwaysShow:(bool)arg1;
- (void)setDisplayRuleType:(unsigned long long)arg1;

@end
