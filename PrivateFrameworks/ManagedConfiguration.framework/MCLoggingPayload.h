
@interface MCLoggingPayload : MCPayload {
    NSDictionary * _loggingPayload;
}

@property (nonatomic, readonly) NSDictionary *loggingPayload;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)isAllowedToWriteLogging;
- (id)loggingPayload;
- (id)stubDictionary;
- (id)title;

@end
