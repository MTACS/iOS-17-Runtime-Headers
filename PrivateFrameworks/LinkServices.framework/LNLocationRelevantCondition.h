
@interface LNLocationRelevantCondition : LNRelevantCondition {
    CLRegion * _region;
}

@property (nonatomic, readonly, copy) CLRegion *region;

- (void).cxx_destruct;
- (id)initWithRegion:(id)arg1;
- (id)region;

@end
