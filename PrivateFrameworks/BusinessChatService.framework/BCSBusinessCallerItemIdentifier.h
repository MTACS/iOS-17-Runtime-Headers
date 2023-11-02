
@interface BCSBusinessCallerItemIdentifier : NSObject <BCSItemIdentifying, NSCopying, NSSecureCoding> {
    long long  _computedTruncatedHash;
}

@property (nonatomic, readonly) long long computedTruncatedHash;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject *itemIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long truncatedHash;
@property (nonatomic, readonly) long long type;

+ (long long)_truncatedHashForPhoneNumber:(id)arg1;
+ (bool)supportsSecureCoding;

- (long long)computedTruncatedHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithTruncatedHash:(long long)arg1;
- (id)itemIdentifier;
- (bool)matchesItemIdentifying:(id)arg1;
- (long long)truncatedHash;
- (long long)type;

@end
