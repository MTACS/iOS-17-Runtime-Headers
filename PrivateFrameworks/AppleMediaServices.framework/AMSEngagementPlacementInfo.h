
@interface AMSEngagementPlacementInfo : NSObject {
    NSDictionary * _context;
    NSString * _placement;
    bool  _supportsMultipleMessages;
}

@property (nonatomic, readonly) NSDictionary *context;
@property (nonatomic, readonly) NSString *placement;
@property (nonatomic) bool supportsMultipleMessages;

- (void).cxx_destruct;
- (id)context;
- (id)initWithPlacement:(id)arg1 context:(id)arg2;
- (id)makeRawDictionary;
- (id)placement;
- (void)setSupportsMultipleMessages:(bool)arg1;
- (bool)supportsMultipleMessages;

@end
