
@interface ICMusicLibraryAuthTokenStatus : NSObject <ICMutableMusicLibraryAuthTokenStatus, NSCopying, NSSecureCoding> {
    bool  _frozen;
    NSError * _lastError;
    NSDate * _lastUpdatedDate;
    bool  _shouldExcludeFromBackgroundRefresh;
    ICMusicLibraryAuthToken * _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSError *lastError;
@property (nonatomic, copy) NSDate *lastUpdatedDate;
@property (nonatomic) bool shouldExcludeFromBackgroundRefresh;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICMusicLibraryAuthToken *token;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isFrozen;
- (id)lastError;
- (id)lastUpdatedDate;
- (void)setFrozen:(bool)arg1;
- (void)setLastError:(id)arg1;
- (void)setLastUpdatedDate:(id)arg1;
- (void)setShouldExcludeFromBackgroundRefresh:(bool)arg1;
- (void)setToken:(id)arg1;
- (bool)shouldExcludeFromBackgroundRefresh;
- (id)token;

@end
