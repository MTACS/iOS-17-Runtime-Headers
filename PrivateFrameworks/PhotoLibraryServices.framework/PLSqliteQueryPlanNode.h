
@interface PLSqliteQueryPlanNode : NSObject {
    int  _identifier;
    NSString * _nodeDescription;
    int  _parentIdentifier;
    int  _unused;
}

@property (readonly) int identifier;
@property (readonly, copy) NSString *nodeDescription;
@property (readonly) int parentIdentifier;
@property (readonly) int unused;

- (void).cxx_destruct;
- (int)identifier;
- (id)initWithIdentifier:(int)arg1 parentIdentifier:(int)arg2 unused:(int)arg3 nodeDescription:(id)arg4;
- (id)nodeDescription;
- (int)parentIdentifier;
- (int)unused;

@end
