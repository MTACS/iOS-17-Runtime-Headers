
@interface BUAppGroup : NSObject {
    NSURL * _containerURL;
    NSString * _identifier;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) NSURL *containerURL;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

+ (id)books;
+ (bool)isUnitTesting;

- (void).cxx_destruct;
- (id)containerURL;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)userDefaults;

@end
