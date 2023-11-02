
@interface CTLocalPlan : CTPlan {
    CTPlanIdentifier * _planID;
}

@property (nonatomic, retain) CTPlanIdentifier *planID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlanID:(id)arg1;
- (id)planID;
- (void)setPlanID:(id)arg1;

@end
