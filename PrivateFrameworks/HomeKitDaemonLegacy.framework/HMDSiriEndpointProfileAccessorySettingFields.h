
@interface HMDSiriEndpointProfileAccessorySettingFields : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _serializeFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)booleanValueKeyPaths;
+ (id)fieldKeyForKeyPath:(id)arg1;
+ (id)keyPaths;
+ (id)languageValueKeyPaths;
+ (id)logCategory;
+ (id)numberValueKeyPaths;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)init;
- (id)serializeFields;
- (void)setBoolValue:(bool)arg1 forKeyPath:(id)arg2;
- (void)setLanguageValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setNumberValue:(id)arg1 forKeyPath:(id)arg2;

@end
