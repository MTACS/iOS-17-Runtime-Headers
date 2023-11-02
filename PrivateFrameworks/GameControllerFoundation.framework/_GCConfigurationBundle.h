
@interface _GCConfigurationBundle : NSBundle <NSCopying> {
    GCVersion * _compatibilityVersion;
    NSString * _configurationType;
    GCVersion * _version;
}

@property (readonly) GCVersion *compatibilityVersion;
@property (readonly) NSString *configurationType;
@property (readonly) NSString *identifier;
@property (readonly) GCVersion *version;

- (void).cxx_destruct;
- (id)compatibilityVersion;
- (id)configurationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (id)redactedDescription;
- (id)version;

@end
