
@interface BMSelectExpression : NSObject <BMTableQueryExpression> {
    NSArray * _children;
    NSArray * _columnNames;
}

@property (nonatomic, retain) NSArray *children;
@property (nonatomic, copy) NSArray *columnNames;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)children;
- (id)columnNames;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithChildren:(id)arg1 columnNames:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)queryTable:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setColumnNames:(id)arg1;

@end
