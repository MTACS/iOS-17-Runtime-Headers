
@interface ICPlayActivityEventItemIDs : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _cloudID;
    long long  _equivalencySourceAdamID;
    NSString * _lyricsID;
    long long  _purchasedAdamID;
    long long  _radioAdamID;
    long long  _reportingAdamID;
    long long  _subscriptionAdamID;
}

@property (nonatomic, readonly) unsigned long long cloudID;
@property (nonatomic, readonly) long long equivalencySourceAdamID;
@property (nonatomic, readonly, copy) NSString *lyricsID;
@property (nonatomic, readonly) long long purchasedAdamID;
@property (nonatomic, readonly) long long radioAdamID;
@property (nonatomic, readonly) long long reportingAdamID;
@property (nonatomic, readonly) long long subscriptionAdamID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (unsigned long long)cloudID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)equivalencySourceAdamID;
- (id)initWithCoder:(id)arg1;
- (id)lyricsID;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)purchasedAdamID;
- (long long)radioAdamID;
- (long long)reportingAdamID;
- (long long)subscriptionAdamID;

@end
