
@interface REMUserActivity : NSObject <NSCopying, NSSecureCoding> {
    NSData * _storage;
    long long  _type;
}

@property (nonatomic, readonly) NSData *storage;
@property (nonatomic, readonly) long long type;

+ (id)dataFromUserActivity:(id)arg1;
+ (id)stringForActivityType:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)userActivityWithDictionaryData:(id)arg1 error:(id*)arg2;
+ (void)userActivityWithUserActivity:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)archivedDictionaryData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugDescriptionDetails;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSiriIntent:(id)arg1;
- (id)initWithType:(long long)arg1 storage:(id)arg2;
- (id)initWithUniversalLink:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithUserActivityData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)siriIntent;
- (id)storage;
- (long long)type;
- (id)universalLink;
- (id)userActivity;
- (id)userActivityData;

@end
