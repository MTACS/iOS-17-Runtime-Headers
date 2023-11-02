
@interface IKJSRWIDependencyDomain : NSObject {
    Class  _agentClass;
    NSDictionary * _commands;
    NSDictionary * _events;
    NSString * _identifier;
    NSDictionary * _types;
}

@property (nonatomic, retain) Class agentClass;
@property (nonatomic, readonly) NSDictionary *commands;
@property (nonatomic, readonly) NSString *dispatcherClassString;
@property (nonatomic, readonly) NSDictionary *events;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *types;

+ (id)allDomains;
+ (id)allowedDomains;
+ (id)domainAgentClassMap;
+ (void)processDomains:(id)arg1;

- (void).cxx_destruct;
- (Class)agentClass;
- (id)commands;
- (id)dispatcherClassString;
- (id)events;
- (id)identifier;
- (id)initWithDomainDictionary:(id)arg1 agentClass:(Class)arg2;
- (bool)isValidForAgentWithError:(id*)arg1;
- (bool)isValidForEventsWithError:(id*)arg1;
- (bool)isValidForTypesWithError:(id*)arg1;
- (bool)isValidWithError:(id*)arg1;
- (void)setAgentClass:(Class)arg1;
- (id)types;

@end
