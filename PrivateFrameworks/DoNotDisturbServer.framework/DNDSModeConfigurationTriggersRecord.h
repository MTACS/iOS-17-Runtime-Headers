
@interface DNDSModeConfigurationTriggersRecord : NSObject <DNDSPartitionedBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSArray * _triggers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *triggers;

+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;
+ (id)newWithDictionaryRepresentation:(id)arg1 partitionedDictionaryRepresentation:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithRecord:(id)arg1;
- (id)_initWithTriggers:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTriggers:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)triggers;

@end
