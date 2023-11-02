
@interface HKMHNotification : NSObject {
    NSString * _category;
}

@property (nonatomic, readonly) NSString *category;

+ (id)allNotificationCategories;
+ (id)notificationCategoryForString:(id)arg1;

- (void).cxx_destruct;
- (id)category;
- (id)init;
- (id)initWithCategory:(id)arg1;

@end
