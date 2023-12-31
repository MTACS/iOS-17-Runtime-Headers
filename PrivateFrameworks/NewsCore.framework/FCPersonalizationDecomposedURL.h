
@interface FCPersonalizationDecomposedURL : NSObject {
    NSString * _domain;
    NSArray * _paths;
}

@property (nonatomic, retain) NSString *domain;
@property (nonatomic, retain) NSArray *paths;

- (void).cxx_destruct;
- (id)domain;
- (id)initWithURL:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (id)paths;
- (void)setDomain:(id)arg1;
- (void)setPaths:(id)arg1;

@end
