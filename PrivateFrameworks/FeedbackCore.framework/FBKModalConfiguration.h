
@interface FBKModalConfiguration : FBKManagedFeedbackObject

@property (nonatomic, copy) NSString *body;
@property (nonatomic, retain) NSArray *choices;
@property (nonatomic, retain) FBKFilePredicate *filePredicate;
@property (nonatomic, copy) NSString *iconName;
@property (nonatomic, copy) FBKQuestion *question;
@property (nonatomic) long long sortOrder;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic) long long typeEnum;

+ (id)entityName;
+ (id)fetchRequest;

- (void)setPropertiesFromJSONObject:(id)arg1;
- (unsigned long long)type;

@end
