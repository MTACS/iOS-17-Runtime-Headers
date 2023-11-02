
@interface IDSIDInfoOptions : NSObject <NSSecureCoding> {
    bool  _allowRefresh;
    bool  _bypassLimit;
    bool  _forceRefresh;
    bool  _respectExpiry;
    bool  _waitForReply;
}

@property (nonatomic) bool allowRefresh;
@property (nonatomic) bool bypassLimit;
@property (nonatomic) bool forceRefresh;
@property (nonatomic) bool respectExpiry;
@property (nonatomic) bool waitForReply;

+ (id)currentIDInfo;
+ (id)refreshIDInfo;
+ (id)refreshIDInfoAndBypassLimit;
+ (bool)supportsSecureCoding;
+ (id)sync_currentIDInfo;
+ (id)sync_refreshIDInfo;

- (bool)allowRefresh;
- (bool)bypassLimit;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceRefresh;
- (id)init;
- (id)initWithBypassLimit:(bool)arg1 allowRefresh:(bool)arg2 forceRefresh:(bool)arg3 respectExpiry:(bool)arg4 waitForReply:(bool)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)respectExpiry;
- (void)setAllowRefresh:(bool)arg1;
- (void)setBypassLimit:(bool)arg1;
- (void)setForceRefresh:(bool)arg1;
- (void)setRespectExpiry:(bool)arg1;
- (void)setWaitForReply:(bool)arg1;
- (bool)waitForReply;

@end
