
@interface DEFilter : NSObject {
    DEMatchCriteria * _exclude;
    DEMatchCriteria * _include;
}

@property (nonatomic, retain) DEMatchCriteria *exclude;
@property (nonatomic, retain) DEMatchCriteria *include;

+ (id)catUpdates;
+ (id)catUpdates:(id)arg1;
+ (id)deprecatedCatSummary;
+ (id)filterFromPb:(const void*)arg1;
+ (id)filterThroughPb:(id)arg1;
+ (void)filterToPb:(id)arg1 filterPb:(void*)arg2;

- (void).cxx_destruct;
- (bool)allows:(id)arg1;
- (bool)apply:(id /* block */)arg1 to:(id)arg2;
- (id)exclude;
- (id)include;
- (id)init;
- (id)initWithInclude:(id)arg1 exclude:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setExclude:(id)arg1;
- (void)setInclude:(id)arg1;

@end
