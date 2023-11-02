
@interface PBFDataRefreshState : NSObject {
    bool  _needsRefresh;
    NSString * _refreshReason;
}

@property (nonatomic, readonly) bool needsRefresh;
@property (nonatomic, readonly, copy) NSString *refreshReason;

- (void).cxx_destruct;
- (id)description;
- (id)initWithNeedsRefresh:(bool)arg1 reason:(id)arg2;
- (bool)needsRefresh;
- (id)refreshReason;

@end
