
@interface ICASUserSnapshotItemData : NSObject <AADataEventType> {
    NSString * _userID;
    NSString * _userStorefrontID;
}

@property (nonatomic, readonly) NSString *userID;
@property (nonatomic, readonly) NSString *userStorefrontID;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithUserID:(id)arg1 userStorefrontID:(id)arg2;
- (id)toDict;
- (id)userID;
- (id)userStorefrontID;

@end
