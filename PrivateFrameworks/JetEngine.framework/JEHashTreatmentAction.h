
@interface JEHashTreatmentAction : JETreatmentAction {
    NSDictionary * _configuration;
    NSString * _namespace;
    NSString * _topic;
}

@property (nonatomic, retain) NSDictionary *configuration;
@property (nonatomic, retain) NSString *namespace;
@property (nonatomic, retain) NSString *topic;

- (void).cxx_destruct;
- (id)configuration;
- (id)hashOf:(id)arg1 userId:(id)arg2;
- (id)initWithField:(id)arg1 configuration:(id)arg2;
- (id)initWithField:(id)arg1 configuration:(id)arg2 topic:(id)arg3;
- (id)namespace;
- (id)performAction:(id)arg1 context:(id)arg2;
- (void)setConfiguration:(id)arg1;
- (void)setNamespace:(id)arg1;
- (void)setTopic:(id)arg1;
- (id)topic;

@end
