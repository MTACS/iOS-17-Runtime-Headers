
@interface TYUsagePairs : NSObject {
    NSMutableArray * __usagePages;
    NSMutableArray * __usages;
}

@property (nonatomic, retain) NSMutableArray *_usagePages;
@property (nonatomic, retain) NSMutableArray *_usages;

- (void).cxx_destruct;
- (id)_usagePages;
- (id)_usages;
- (id)init;
- (void)set_usagePages:(id)arg1;
- (void)set_usages:(id)arg1;
- (id)usagePages;
- (id)usages;

@end
