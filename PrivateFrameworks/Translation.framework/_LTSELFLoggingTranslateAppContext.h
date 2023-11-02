
@interface _LTSELFLoggingTranslateAppContext : NSObject <NSSecureCoding> {
    long long  _displayMode;
    bool  _isGenderAlternativeEnabled;
    _LTLocalePair * _localePair;
    long long  _tabName;
    NSUUID * _tabSessionId;
}

@property (nonatomic, readonly) long long displayMode;
@property (nonatomic, readonly) bool isGenderAlternativeEnabled;
@property (nonatomic, readonly, copy) _LTLocalePair *localePair;
@property (nonatomic, readonly) long long tabName;
@property (nonatomic, readonly, copy) NSUUID *tabSessionId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)displayMode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayMode:(long long)arg1 localePair:(id)arg2 isGenderAlternativeEnabled:(bool)arg3 tabName:(long long)arg4 tabSessionId:(id)arg5;
- (bool)isGenderAlternativeEnabled;
- (id)localePair;
- (long long)tabName;
- (id)tabSessionId;

@end
