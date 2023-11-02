
@interface ATXHeuristicActionMaker : NSObject <NSSecureCoding> {
    ATXActionCriteria * _criteria;
    NSString * _heuristic;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *actionTypeName;
@property (nonatomic, retain) ATXActionCriteria *criteria;
@property (nonatomic, retain) NSString *heuristic;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_makeAction;
- (id)action;
- (id)actionTypeName;
- (id)criteria;
- (void)encodeWithCoder:(id)arg1;
- (id)heuristic;
- (id)initWithCoder:(id)arg1;
- (void)setCriteria:(id)arg1;
- (void)setHeuristic:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
