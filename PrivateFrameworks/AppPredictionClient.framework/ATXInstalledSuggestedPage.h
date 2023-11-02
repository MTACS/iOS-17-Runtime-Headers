
@interface ATXInstalledSuggestedPage : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSString * _modeUUID;
    long long  _pageType;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *modeUUID;
@property (nonatomic) long long pageType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXInstalledSuggestedPage:(id)arg1;
- (id)modeUUID;
- (long long)pageType;
- (void)setIdentifier:(id)arg1;
- (void)setModeUUID:(id)arg1;
- (void)setPageType:(long long)arg1;

@end
