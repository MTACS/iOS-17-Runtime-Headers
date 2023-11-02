
@interface ICASPrivateUserData : NSObject <AADataEventType> {
    NSString * _privateUserID;
    NSString * _saltVersion;
    NSNumber * _userStartMonth;
    NSNumber * _userStartYear;
}

@property (nonatomic, readonly) NSString *privateUserID;
@property (nonatomic, readonly) NSString *saltVersion;
@property (nonatomic, readonly) NSNumber *userStartMonth;
@property (nonatomic, readonly) NSNumber *userStartYear;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithPrivateUserID:(id)arg1 saltVersion:(id)arg2 userStartMonth:(id)arg3 userStartYear:(id)arg4;
- (id)privateUserID;
- (id)saltVersion;
- (id)toDict;
- (id)userStartMonth;
- (id)userStartYear;

@end
