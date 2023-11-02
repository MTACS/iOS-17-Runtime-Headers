
@interface SWFeedConfiguration : NSObject {
    NSDictionary * _configuration;
    NSSet * _selectors;
}

@property (nonatomic, copy) NSDictionary *configuration;
@property (nonatomic, copy) NSSet *selectors;

- (void).cxx_destruct;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithSelectors:(id)arg1 configuration:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)selectors;
- (void)setConfiguration:(id)arg1;
- (void)setSelectors:(id)arg1;

@end
