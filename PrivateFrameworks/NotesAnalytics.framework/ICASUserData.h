
@interface ICASUserData : NSObject <AADataEventType> {
    NSString * _saltVersion;
    NSString * _userID;
    NSNumber * _userStartMonth;
    NSNumber * _userStartYear;
    NSString * _userStorefrontID;
}

@property (nonatomic, readonly) NSString *saltVersion;
@property (nonatomic, readonly) NSString *userID;
@property (nonatomic, readonly) NSNumber *userStartMonth;
@property (nonatomic, readonly) NSNumber *userStartYear;
@property (nonatomic, readonly) NSString *userStorefrontID;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithUserID:(id)arg1 userStorefrontID:(id)arg2 saltVersion:(id)arg3 userStartMonth:(id)arg4 userStartYear:(id)arg5;
- (id)saltVersion;
- (id)toDict;
- (id)userID;
- (id)userStartMonth;
- (id)userStartYear;
- (id)userStorefrontID;

@end
