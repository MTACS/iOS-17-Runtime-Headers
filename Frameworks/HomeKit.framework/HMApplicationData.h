
@interface HMApplicationData : NSObject <HFStateDumpBuildable, NSCopying> {
    NSMutableDictionary * _applicationData;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly, copy) NSArray *allKeys;
@property (nonatomic, readonly, copy) NSArray *allValues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSDictionary *dictionary;
@property (getter=isEmpty, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)allowedObjectClasses;

- (void).cxx_destruct;
- (id)allKeys;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionary;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContentsOfDictionary:(id)arg1;
- (id)initWithDictionaryFromCoder:(id)arg1 key:(id)arg2;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
