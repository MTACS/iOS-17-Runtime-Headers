
@interface EMMessageCollectionItemID : NSObject <EFCacheable, EMCollectionItemID> {
    long long  _globalMessageID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long globalMessageID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)cachedSelf;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)getGlobalMessageID;
- (long long)globalMessageID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGlobalMessageID:(long long)arg1;
- (bool)isEqual:(id)arg1;

@end
