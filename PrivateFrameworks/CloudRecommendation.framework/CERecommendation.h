
@interface CERecommendation : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _actions;
    NSString * _bundleID;
    NSString * _category;
    bool  _completed;
    CEIcon * _icon;
    NSString * _identifier;
    NSString * _message;
    NSString * _status;
    NSNumber * _storageRecoverable;
    NSString * _subTitle;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *category;
@property (nonatomic) bool completed;
@property (nonatomic, retain) CEIcon *icon;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *status;
@property (nonatomic, retain) NSNumber *storageRecoverable;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (id)bundleID;
- (id)category;
- (bool)completed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 bundleID:(id)arg4 storageRecoverable:(id)arg5 category:(id)arg6 actions:(id)arg7;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 message:(id)arg4 bundleID:(id)arg5 storageRecoverable:(id)arg6 category:(id)arg7 actions:(id)arg8;
- (id)message;
- (void)parseActions:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setStorageRecoverable:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)status;
- (id)storageRecoverable;
- (id)subTitle;
- (id)title;

@end
