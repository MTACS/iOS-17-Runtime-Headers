
@interface CKDatabaseSubscription : CKSubscription <NSCopying, NSSecureCoding>

@property (copy) NSString *recordType;

+ (void)initialize;
+ (id)new;
+ (bool)supportsSecureCoding;

- (id)CKPropertiesDescription;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionID:(id)arg1;
- (void)setRecordType:(id)arg1;

@end
