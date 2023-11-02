
@interface MCSingleSignOnPayload : MCPayload {
    NSString * _humanReadableName;
    MCSingleSignOnPayloadKerberosInfo * _kerberosInfo;
}

@property (nonatomic, retain) NSString *humanReadableName;
@property (nonatomic, retain) MCSingleSignOnPayloadKerberosInfo *kerberosInfo;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)humanReadableName;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)kerberosInfo;
- (id)payloadDescriptionKeyValueSections;
- (void)setHumanReadableName:(id)arg1;
- (void)setKerberosInfo:(id)arg1;
- (id)stubDictionary;
- (id)title;
- (id)verboseDescription;

@end
