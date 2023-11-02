
@interface WBSWebExtensionDeclarativeNetRequestRuleset : NSObject {
    bool  _enabled;
    NSString * _jsonPath;
    NSString * _rulesetID;
}

@property (nonatomic) bool enabled;
@property (nonatomic, readonly, copy) NSString *jsonPath;
@property (nonatomic, readonly, copy) NSString *rulesetID;

- (void).cxx_destruct;
- (id)description;
- (bool)enabled;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)jsonPath;
- (id)rulesetID;
- (void)setEnabled:(bool)arg1;

@end
