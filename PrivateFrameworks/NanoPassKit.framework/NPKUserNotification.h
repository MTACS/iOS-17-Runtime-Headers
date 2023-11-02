
@interface NPKUserNotification : NSObject <NPKUserNotificationModel>

@property (nonatomic, readonly) NSString *body;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *identifierHashComponents;
@property (nonatomic, readonly) bool isSuppressed;
@property (nonatomic, readonly) NSString *notificationCategoryIdentifier;
@property (readonly) Class superclass;
@property (getter=isSuppressed, nonatomic, readonly) bool suppressed;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) bool wantsBadgedIcon;

+ (id)generateModelIdentifierWith:(id)arg1;

- (id)body;
- (id)identifier;
- (id)identifierHashComponents;
- (bool)isSuppressed;
- (id)notificationCategoryIdentifier;
- (id)title;
- (id)userInfo;
- (bool)wantsBadgedIcon;

@end
