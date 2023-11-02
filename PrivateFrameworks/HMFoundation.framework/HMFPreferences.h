
@interface HMFPreferences : HMFObject <HMFObject> {
    HMFClassRegistry * _classRegistry;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    NSMutableDictionary * _preferences;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) HMFClassRegistry *classRegistry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *preferences;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)classRegistry;
+ (id)defaultValueForPreferenceKey:(id)arg1;
+ (id)defaultValues;
+ (Class)preferenceClassForPreferenceKey:(id)arg1;
+ (void)setDefaultValue:(id)arg1 forPreferenceKey:(id)arg2;
+ (void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2;
+ (id)sharedPreferences;

- (void).cxx_destruct;
- (id)classRegistry;
- (id)init;
- (Class)preferenceClassForPreferenceKey:(id)arg1;
- (id)preferenceForKey:(id)arg1;
- (id)preferences;
- (id)propertyDescription;
- (void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (void)loadEnableAppleMediaAccessories;
+ (void)loadEnableMediaAccessoriesPreferences;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (void)loadEnableAppleMediaAccessories;
+ (void)loadEnableMediaAccessoriesPreferences;

@end
