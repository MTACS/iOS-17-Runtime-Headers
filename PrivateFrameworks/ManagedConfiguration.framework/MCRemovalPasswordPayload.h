
@interface MCRemovalPasswordPayload : MCPayload {
    NSString * _removalPasscode;
}

@property (nonatomic, retain) NSString *removalPasscode;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)removalPasscode;
- (void)setRemovalPasscode:(id)arg1;
- (id)stubDictionary;

@end
