
@interface EDAMAdParameters : FATObject {
    NSString * _clientLanguage;
    NSDictionary * _clientProperties;
    NSArray * _impressions;
    NSNumber * _supportHtml;
}

@property (nonatomic, retain) NSString *clientLanguage;
@property (nonatomic, retain) NSDictionary *clientProperties;
@property (nonatomic, retain) NSArray *impressions;
@property (nonatomic, retain) NSNumber *supportHtml;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)clientLanguage;
- (id)clientProperties;
- (id)impressions;
- (void)setClientLanguage:(id)arg1;
- (void)setClientProperties:(id)arg1;
- (void)setImpressions:(id)arg1;
- (void)setSupportHtml:(id)arg1;
- (id)supportHtml;

@end
