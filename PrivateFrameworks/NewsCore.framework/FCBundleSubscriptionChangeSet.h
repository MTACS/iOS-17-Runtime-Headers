
@interface FCBundleSubscriptionChangeSet : NSObject {
    NSArray * _tagIDsAdded;
    NSArray * _tagIDsRemoved;
}

@property (nonatomic, copy) NSArray *tagIDsAdded;
@property (nonatomic, copy) NSArray *tagIDsRemoved;

- (void).cxx_destruct;
- (id)initWithTagIDsAdded:(id)arg1 tagIDsRemoved:(id)arg2;
- (void)setTagIDsAdded:(id)arg1;
- (void)setTagIDsRemoved:(id)arg1;
- (id)tagIDsAdded;
- (id)tagIDsRemoved;

@end
