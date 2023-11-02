
@protocol AMSBagConsumer <NSObject>

@required

+ (NSString *)bagSubProfile;
+ (NSString *)bagSubProfileVersion;

@optional

+ (AMSBagKeySet *)bagKeySet;
+ (AMSBag *)createBagForSubProfile;

@end
