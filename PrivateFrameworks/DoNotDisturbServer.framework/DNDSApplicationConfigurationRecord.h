
@interface DNDSApplicationConfigurationRecord : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSSet * _allowedThreads;
    NSSet * _deniedThreads;
    NSNumber * _minimumBreakthroughUrgency;
}

@property (nonatomic, readonly, copy) NSSet *allowedThreads;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSSet *deniedThreads;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *minimumBreakthroughUrgency;
@property (readonly) Class superclass;

+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithMinimumBreakthroughUrgency:(id)arg1 allowedThreads:(id)arg2 deniedThreads:(id)arg3;
- (id)_initWithRecord:(id)arg1;
- (id)allowedThreads;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deniedThreads;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)minimumBreakthroughUrgency;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
