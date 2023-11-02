
@interface HPSHomeProxy : NSObject <NSSecureCoding> {
    NSString * _accesoryName;
    bool  _hasValidHomeLoaded;
    bool  _isAutoSUEnabled;
    bool  _isMediaPeerToPeerEnabled;
    long long  _minimumMediaUserPrivilege;
}

@property (nonatomic, readonly, copy) NSString *accesoryName;
@property (nonatomic, readonly) bool hasValidHomeLoaded;
@property (nonatomic) bool isAutoSUEnabled;
@property (nonatomic) bool isMediaPeerToPeerEnabled;
@property (nonatomic) long long minimumMediaUserPrivilege;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accesoryName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidHomeLoaded;
- (id)initWithAccessoryName:(id)arg1 validHome:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isAutoSUEnabled;
- (bool)isMediaPeerToPeerEnabled;
- (long long)minimumMediaUserPrivilege;
- (void)setIsAutoSUEnabled:(bool)arg1;
- (void)setIsMediaPeerToPeerEnabled:(bool)arg1;
- (void)setMinimumMediaUserPrivilege:(long long)arg1;

@end
