
@interface DNDSGlobalConfiguration : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    bool  _automaticallyGenerated;
    DNDBypassSettings * _bypassSettings;
    NSDate * _lastModified;
    unsigned long long  _modesCanImpactAvailability;
    unsigned long long  _preventAutoReply;
}

@property (getter=isAutomaticallyGenerated, nonatomic, readonly) bool automaticallyGenerated;
@property (nonatomic, readonly, copy) DNDBypassSettings *bypassSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *lastModified;
@property (nonatomic, readonly) unsigned long long modesCanImpactAvailability;
@property (nonatomic, readonly) unsigned long long preventAutoReply;
@property (readonly) Class superclass;

+ (id)backingStoreWithFileURL:(id)arg1;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithConfiguration:(id)arg1;
- (id)bypassSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPreventAutoReply:(unsigned long long)arg1 bypassSettings:(id)arg2 modesCanImpactAvailability:(unsigned long long)arg3 lastModified:(id)arg4 automaticallyGenerated:(bool)arg5;
- (bool)isAutomaticallyGenerated;
- (bool)isEqual:(id)arg1;
- (id)lastModified;
- (id)mergeWithGlobalConfiguration:(id)arg1;
- (unsigned long long)modesCanImpactAvailability;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)preventAutoReply;

@end
