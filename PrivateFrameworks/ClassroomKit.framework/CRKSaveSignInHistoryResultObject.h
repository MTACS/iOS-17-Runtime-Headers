
@interface CRKSaveSignInHistoryResultObject : CATTaskResultObject {
    NSArray * _history;
}

@property (nonatomic, copy) NSArray *history;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)history;
- (id)initWithCoder:(id)arg1;
- (void)setHistory:(id)arg1;

@end
