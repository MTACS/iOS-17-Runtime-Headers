
@interface _NTKComplicationCacheKey : NSObject <NSCopying> {
    NTKComplication * _complication;
    NSUUID * _deviceUUID;
    NTKComplicationVariant * _variant;
}

@property (readonly) NTKComplication *complication;
@property (readonly) NSUUID *deviceUUID;
@property (readonly) NTKComplicationVariant *variant;

+ (id)keyWithVariant:(id)arg1 complication:(id)arg2 forDevice:(id)arg3;

- (void).cxx_destruct;
- (id)complication;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceUUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)variant;

@end
