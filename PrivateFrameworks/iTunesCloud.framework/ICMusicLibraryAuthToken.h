
@interface ICMusicLibraryAuthToken : NSObject <ICMutableMusicLibraryAuthToken, NSCopying, NSSecureCoding> {
    NSString * _deviceGUID;
    NSDate * _expirationDate;
    bool  _frozen;
    NSString * _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceGUID;
@property (nonatomic, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *token;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceGUID;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isExpired;
- (bool)isFrozen;
- (void)setDeviceGUID:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
