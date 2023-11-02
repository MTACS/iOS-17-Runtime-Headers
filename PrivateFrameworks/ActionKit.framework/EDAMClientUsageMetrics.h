
@interface EDAMClientUsageMetrics : FATObject {
    NSNumber * _sessions;
    NSString * _subjectConsumerKey;
    NSString * _subjectConsumerSecret;
}

@property (nonatomic, retain) NSNumber *sessions;
@property (nonatomic, retain) NSString *subjectConsumerKey;
@property (nonatomic, retain) NSString *subjectConsumerSecret;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)sessions;
- (void)setSessions:(id)arg1;
- (void)setSubjectConsumerKey:(id)arg1;
- (void)setSubjectConsumerSecret:(id)arg1;
- (id)subjectConsumerKey;
- (id)subjectConsumerSecret;

@end
