
@interface NSHTTPCookie2 : NSObject <NSCopying, NSMutableCopying> {
    NSString * _domain;
    NSString * _etldPlusOne;
    bool  _hostOnly;
    bool  _httpOnly;
    NSString * _name;
    NSString * _partition;
    NSString * _path;
    unsigned long long  _sCreationDate;
    unsigned long long  _sExpirationDate;
    unsigned long long  _sLastAccessTime;
    long long  _sameSite;
    bool  _secure;
    bool  _sesion;
    bool  _session;
    long long  _source;
    NSString * _value;
    NSDate * creationDate;
}

@property (readonly) NSDate *creationDate;
@property (readonly) NSString *domain;
@property (readonly) NSDate *expirationDate;
@property (readonly) bool hostOnly;
@property (readonly) bool httpOnly;
@property (readonly) NSString *name;
@property (readonly) NSString *partition;
@property (readonly) NSString *path;
@property (readonly) long long sameSite;
@property (readonly) bool secure;
@property (readonly) bool sesion;
@property (readonly) long long source;
@property (readonly) NSString *value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (id)domain;
- (id)expirationDate;
- (bool)hostOnly;
- (bool)httpOnly;
- (id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)partition;
- (id)path;
- (long long)sameSite;
- (bool)secure;
- (bool)sesion;
- (long long)source;
- (id)value;

@end
