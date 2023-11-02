
@interface HDSPSyncedDefaultsKeySet : NSObject {
    NSDictionary * _defaultValues;
    NSString * _identifier;
    NSSet * _keysToPersist;
    NSSet * _keysToSync;
    NSString * _modificationDateKey;
    NSSet * _perGizmoKeys;
}

@property (nonatomic, readonly) NSDictionary *defaultValues;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSSet *keysToPersist;
@property (nonatomic, readonly) NSSet *keysToSync;
@property (nonatomic, readonly, copy) NSString *modificationDateKey;
@property (nonatomic, readonly) NSSet *perGizmoKeys;

- (void).cxx_destruct;
- (id)defaultValues;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 modficationDateKey:(id)arg2 keysToPersist:(id)arg3 keysToSync:(id)arg4;
- (id)initWithIdentifier:(id)arg1 modficationDateKey:(id)arg2 keysToPersist:(id)arg3 keysToSync:(id)arg4 perGizmoKeys:(id)arg5 defaultValues:(id)arg6;
- (id)keysToPersist;
- (id)keysToSync;
- (id)modificationDateKey;
- (id)perGizmoKeys;

@end
