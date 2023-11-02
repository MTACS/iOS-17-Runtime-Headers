
@interface SSLocalWebResultBuilder : SSResultBuilder {
    NSString * _siteName;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *siteName;
@property (nonatomic, retain) NSURL *url;

+ (id)stringWithUrl:(id)arg1;
+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildResult;
- (id)initWithResult:(id)arg1;
- (void)setSiteName:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)siteName;
- (id)url;

@end
