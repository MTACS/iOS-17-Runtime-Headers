
@interface ATXSuggestedPagesFilter : NSObject <NSSecureCoding> {
    NSString * _modeUUID;
    long long  _pageType;
}

@property (nonatomic, copy) NSString *modeUUID;
@property (nonatomic) long long pageType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)modeUUID;
- (long long)pageType;
- (void)setModeUUID:(id)arg1;
- (void)setPageType:(long long)arg1;

@end
