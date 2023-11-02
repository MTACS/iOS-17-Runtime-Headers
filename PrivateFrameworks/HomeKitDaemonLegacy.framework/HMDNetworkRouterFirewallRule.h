
@interface HMDNetworkRouterFirewallRule : HMFObject <HMFLogging> {
    bool  _critical;
    NSDictionary * _jsonDictionary;
    NSString * _name;
}

@property (getter=isCritical, nonatomic, readonly) bool critical;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *jsonDictionary;
@property (nonatomic, readonly) NSString *jsonString;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *prettyJSONDictionary;
@property (readonly) Class superclass;

+ (id)__transportProtocolToString:(unsigned char)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithJSONDictionary:(id)arg1 critical:(bool)arg2;
- (id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(bool)arg3;
- (bool)isCritical;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)jsonString;
- (id)name;
- (id)prettyJSONDictionary;

@end
