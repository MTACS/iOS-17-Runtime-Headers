
@interface _HKCachedSharedSummary : NSObject {
    HKSharedSummary * _summary;
}

@property (nonatomic, readonly) HKSharedSummary *summary;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithSummary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)summary;

@end
