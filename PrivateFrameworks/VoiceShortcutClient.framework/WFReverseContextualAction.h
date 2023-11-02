
@interface WFReverseContextualAction : WFContextualAction {
    WFContextualAction * _actionToReverse;
    NSData * _reversalState;
}

@property (nonatomic, readonly) WFContextualAction *actionToReverse;
@property (nonatomic, readonly, copy) NSData *reversalState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionToReverse;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActionToReverse:(id)arg1 reversalState:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)reversalState;

@end
