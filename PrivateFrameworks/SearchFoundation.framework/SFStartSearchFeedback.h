
@interface SFStartSearchFeedback : SFFeedback {
    NSString * _input;
    unsigned long long  _searchType;
    unsigned long long  _triggerEvent;
    NSString * _uuid;
}

@property (nonatomic, copy) NSString *input;
@property (nonatomic) unsigned long long searchType;
@property (nonatomic) unsigned long long triggerEvent;
@property (nonatomic, retain) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 queryId:(unsigned long long)arg3;
- (id)input;
- (unsigned long long)searchType;
- (void)setInput:(id)arg1;
- (void)setSearchType:(unsigned long long)arg1;
- (void)setTriggerEvent:(unsigned long long)arg1;
- (void)setUuid:(id)arg1;
- (unsigned long long)triggerEvent;
- (id)uuid;

@end
