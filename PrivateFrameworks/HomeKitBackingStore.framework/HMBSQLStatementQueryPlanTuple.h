
@interface HMBSQLStatementQueryPlanTuple : HMFObject {
    NSString * _detail;
    int  _parent;
    int  _row;
}

@property (nonatomic, readonly) NSString *detail;
@property (nonatomic, readonly) int parent;
@property (nonatomic, readonly) int row;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)detail;
- (id)initWithRow:(id)arg1;
- (int)parent;
- (int)row;

@end
