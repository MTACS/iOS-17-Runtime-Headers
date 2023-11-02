
@interface SGSchemaOrgKey : NSObject <SGEntityKey> {
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isSupportedEntityType:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSerialized:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSchemaOrgKey:(id)arg1;
- (id)serialize;

@end