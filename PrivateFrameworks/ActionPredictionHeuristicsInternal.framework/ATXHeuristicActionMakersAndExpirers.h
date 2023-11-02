
@interface ATXHeuristicActionMakersAndExpirers : NSObject <NSSecureCoding> {
    NSArray * _actionMakers;
    NSSet * _expirers;
}

@property (nonatomic, readonly) NSArray *actionMakers;
@property (nonatomic, readonly) NSSet *expirers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionMakers;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirers;
- (id)initWithActionMakers:(id)arg1 expirers:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
