
@interface PKPassEntitlementTemplate : NSObject {
    NSBundle * _bundle;
    NSDictionary * _fieldInserts;
    NSDictionary * _rawDictionary;
}

@property (nonatomic, readonly) bool clearGroupWhenSelected;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (nonatomic, readonly) long long groupRenderingPriority;
@property (nonatomic, readonly) NSString *icon;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *localizedGroup;
@property (nonatomic, readonly) NSString *localizedTitle;

- (void).cxx_destruct;
- (id)_stringReplacingPlaceholdersInString:(id)arg1 withInserts:(id)arg2;
- (bool)clearGroupWhenSelected;
- (unsigned long long)displayStyle;
- (long long)groupRenderingPriority;
- (id)icon;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)localizedDescription;
- (id)localizedGroup;
- (id)localizedTitle;
- (void)setFieldInserts:(id)arg1;

@end
