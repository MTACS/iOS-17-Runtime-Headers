
@interface XRVMCoalescedRegion : XRVMRegion {
    NSString * _groupName;
    unsigned int  _multiplicityFlags;
    NSMutableArray * _subRegions;
    unsigned long long  _virtualSize;
}

- (void).cxx_destruct;
- (void)addRegion:(id)arg1;
- (id)displayPath;
- (id)displayType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegions:(id)arg1 groupName:(id)arg2;
- (bool)isFakeAggregate;
- (void)sortSubregionsWithComparator:(id /* block */)arg1;
- (id)subRegions;
- (unsigned long long)virtualSize;

@end
