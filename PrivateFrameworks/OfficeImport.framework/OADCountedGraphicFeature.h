
@interface OADCountedGraphicFeature : NSObject {
    id  mFeature;
    unsigned long long  mUsageCount;
}

@property (nonatomic) unsigned long long usageCount;

- (void).cxx_destruct;
- (long long)compareUsageCount:(id)arg1;
- (void)dealloc;
- (id)feature;
- (void)incrementUsageCount;
- (id)initWithFeature:(id)arg1;
- (void)setUsageCount:(unsigned long long)arg1;
- (unsigned long long)usageCount;

@end
