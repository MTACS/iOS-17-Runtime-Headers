
@interface CSLPRFStingConfigurationHistoryItem : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _actionType;
    NSString * _bundleID;
    NSString * _identifier;
}

@property (nonatomic, retain) NSNumber *actionType;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionType;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithBundleID:(id)arg1 actionType:(unsigned long long)arg2 identifier:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setActionType:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
