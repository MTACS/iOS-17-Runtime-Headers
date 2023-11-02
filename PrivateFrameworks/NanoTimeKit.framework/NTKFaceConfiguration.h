
@interface NTKFaceConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _cachedDescription;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachedDescriptionLock;
    NSMutableDictionary * _complications;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _complicationsLock;
    NSMutableDictionary * _customData;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _customDataLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _descriptionLock;
    NSMutableDictionary * _editModeConfigurations;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _editModeConfigurationsLock;
    NSMutableDictionary * _metrics;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _metricsLock;
    NSString * _name;
    bool  _resourceDirectoryExists;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool resourceDirectoryExists;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyComplicationsDescription:(id)arg1;
- (void)_applyCustomData:(id)arg1;
- (void)_applyCustomizationDescription:(id)arg1 editModeMapping:(id)arg2 forDevice:(id)arg3;
- (void)_applyMetrics:(id)arg1;
- (id)_dateMetricsKeys;
- (void)_enumerateComplicationsWithBlock:(id /* block */)arg1;
- (void)_enumerateCustomDataWithBlock:(id /* block */)arg1;
- (void)_enumerateEditModeConfigurationsWithBlock:(id /* block */)arg1;
- (void)_invalidateDescription;
- (void)addConfigurationKeysToJSONDictionary:(id)arg1 face:(id)arg2;
- (void)appendCustomDataToDailySnapshotKey:(id)arg1;
- (void)appendEditModesToDailySnapshotKey:(id)arg1;
- (void)clearMetrics;
- (id)colorEditModeConfigurationWithJsonRepresentation:(id)arg1 editMode:(long long)arg2 editModeMapping:(id)arg3 forDevice:(id)arg4;
- (id)complicationForSlot:(id)arg1;
- (id)complications;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customData;
- (id)customDataForKey:(id)arg1;
- (id)description;
- (id)editModeConfigurations;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (void)incrementMetricForKey:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 editModeMapping:(id)arg2 forDevice:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)metricForKey:(id)arg1;
- (id)metrics;
- (id)name;
- (id)optionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)resourceDirectoryExists;
- (void)setComplication:(id)arg1 forSlot:(id)arg2;
- (void)setCustomData:(id)arg1 forKey:(id)arg2;
- (void)setCustomDataFromConfiguration:(id)arg1;
- (void)setMetric:(id)arg1 forKey:(id)arg2;
- (void)setMetricsFromConfiguration:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)setResourceDirectoryExists:(bool)arg1;
- (id)validationString;

@end
