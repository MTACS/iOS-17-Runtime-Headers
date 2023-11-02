
@interface IDSActivityInfo : NSObject <NSSecureCoding> {
    NSArray * _URIs;
    NSData * _appContext;
    NSArray * _deviceUniqueIDs;
    NSDate * _expirationDate;
    NSString * _subActivity;
    NSArray * _tokens;
}

@property (nonatomic, readonly) NSArray *URIs;
@property (nonatomic, copy) NSData *appContext;
@property (nonatomic, readonly) NSArray *deviceUniqueIDs;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *subActivity;
@property (nonatomic, readonly) NSArray *tokens;

+ (id)activityInfoWithSubActivity:(id)arg1 URIs:(id)arg2;
+ (id)activityInfoWithSubActivity:(id)arg1 devices:(id)arg2;
+ (id)activityInfoWithSubActivity:(id)arg1 tokens:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URIs;
- (id)_initWithSubActivity:(id)arg1;
- (id)appContext;
- (id)description;
- (id)deviceUniqueIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (bool)isIdentical:(id)arg1;
- (void)setAppContext:(id)arg1;
- (id)subActivity;
- (id)tokens;

@end
