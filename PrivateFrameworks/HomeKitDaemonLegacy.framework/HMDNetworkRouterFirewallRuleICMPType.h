
@interface HMDNetworkRouterFirewallRuleICMPType : NSObject {
    NSDictionary * _jsonDictionary;
    unsigned char  _protocol;
    NSNumber * _typeValue;
}

@property (nonatomic, readonly) NSDictionary *jsonDictionary;
@property (nonatomic, readonly) NSDictionary *prettyJSONDictionary;
@property (nonatomic, readonly) unsigned char protocol;
@property (nonatomic, readonly) NSNumber *typeValue;

+ (id)createListWithJSONDictionary:(id)arg1 key:(id)arg2;
+ (id)createWithJSONDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithJSONDictionary:(id)arg1 protocol:(unsigned char)arg2 typeValue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)prettyJSONDictionary;
- (unsigned char)protocol;
- (id)typeValue;

@end
