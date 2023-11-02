
@interface HFChildServiceFilter : NSObject {
    NSSet * _childServiceTypes;
}

@property (nonatomic, readonly, copy) NSSet *childServiceTypes;

- (void).cxx_destruct;
- (id)childServiceTypes;
- (id)filteredChildServicesForParentService:(id)arg1;
- (id)initWithChildServiceTypes:(id)arg1;

@end
