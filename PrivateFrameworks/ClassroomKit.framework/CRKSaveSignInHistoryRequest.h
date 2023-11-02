
@interface CRKSaveSignInHistoryRequest : CATTaskRequest {
    CRKSignInHistoryItem * _item;
}

@property (nonatomic, retain) CRKSignInHistoryItem *item;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;

@end
