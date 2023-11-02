
@interface PHPersistentChangeToken : NSObject <NSCopying, NSSecureCoding> {
    NSPersistentHistoryToken * _persistentHistoryToken;
    int  _version;
}

@property (nonatomic, readonly) NSPersistentHistoryToken *persistentHistoryToken;
@property (nonatomic, readonly) int version;

+ (id)currentTokenForContext:(id)arg1;
+ (int)currentVersion;
+ (bool)supportsSecureCoding;
+ (id)tokenWithPersistentHistoryToken:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentHistoryToken:(id)arg1;
- (id)initWithPersistentHistoryToken:(id)arg1 version:(int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPersistentChangeToken:(id)arg1;
- (id)persistentHistoryToken;
- (int)version;

@end
