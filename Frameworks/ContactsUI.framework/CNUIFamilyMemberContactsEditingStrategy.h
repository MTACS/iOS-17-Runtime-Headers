
@interface CNUIFamilyMemberContactsEditingStrategy : NSObject {
    NSArray * _prohibitedPropertyKeys;
    id /* block */  _sensitiveDataContactFilter;
}

@property (nonatomic, readonly) NSArray *prohibitedPropertyKeys;
@property (nonatomic, readonly) id /* block */ sensitiveDataContactFilter;

+ (id)managedContactsStrategy;
+ (id)whitelistedContactsStrategy;

- (void).cxx_destruct;
- (id)initWithProhibitedPropertyKeys:(id)arg1 sensitiveDataContactFilter:(id /* block */)arg2;
- (id)prohibitedPropertyKeys;
- (id /* block */)sensitiveDataContactFilter;

@end
