
@interface TSNewsActivityData : NSObject {
    void activity;
    void identifier;
    void object;
    void traits;
}

@property (nonatomic, readonly) long long activity;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) NSArray *traits;

+ (long long)convertToArticleTraitWithTrait:(long long)arg1;

- (void).cxx_destruct;
- (long long)activity;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithActivity:(long long)arg1 identifier:(id)arg2;
- (id)initWithActivity:(long long)arg1 identifier:(id)arg2 object:(id)arg3;
- (id)initWithActivity:(long long)arg1 identifier:(id)arg2 object:(id)arg3 traits:(id)arg4;
- (id)object;
- (id)traits;

@end
