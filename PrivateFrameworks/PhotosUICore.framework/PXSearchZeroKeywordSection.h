
@interface PXSearchZeroKeywordSection : NSObject {
    long long  _sectionType;
    NSArray * _viewModels;
}

@property (nonatomic, readonly) long long sectionType;
@property (nonatomic, readonly) NSArray *viewModels;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(long long)arg1 viewModels:(id)arg2;
- (void)removeItem:(id)arg1;
- (long long)sectionType;
- (id)viewModels;

@end
