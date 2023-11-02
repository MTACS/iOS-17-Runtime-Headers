
@interface JTSuspendedInteractionRequest : NSObject {
    NSArray * _excludedChildViewControllers;
    NSString * _tag;
}

@property (nonatomic, retain) NSArray *excludedChildViewControllers;
@property (nonatomic, retain) NSString *tag;

+ (id)requestWithTag:(id)arg1 excludedViewControllers:(id)arg2;

- (void).cxx_destruct;
- (id)excludedChildViewControllers;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setExcludedChildViewControllers:(id)arg1;
- (void)setTag:(id)arg1;
- (id)tag;

@end
