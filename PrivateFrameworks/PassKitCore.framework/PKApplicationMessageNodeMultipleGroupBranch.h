
@interface PKApplicationMessageNodeMultipleGroupBranch : PKApplicationMessageNode {
    NSMutableArray * _children;
    NSString * _identifier;
}

@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)createSummary;
- (id)identifier;

@end
