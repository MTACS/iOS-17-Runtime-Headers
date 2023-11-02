
@interface _GCDeviceDBBundle : NSObject {
    _GCConfigurationBundle * _bundle;
    NSArray * _devices;
}

@property (readonly, copy) NSArray *devices;
@property (readonly) NSString *identifier;
@property (readonly) GCVersion *version;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)devices;
- (id)identifier;
- (id)initWithBundle:(id)arg1 error:(out id*)arg2;
- (id)redactedDescription;
- (id)version;

@end
