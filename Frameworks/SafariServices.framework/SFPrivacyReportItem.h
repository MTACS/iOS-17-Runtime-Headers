
@interface SFPrivacyReportItem : NSObject <NSCopying> {
    long long  _type;
    id  _userInfo;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) id userInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 userInfo:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)type;
- (id)userInfo;

@end
