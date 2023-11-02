
@interface PXCuratedAssetCollectionDiagnosticsRadarComponentInformation : NSObject {
    NSString * _componentID;
    NSString * _name;
    NSString * _version;
}

@property (readonly) NSString *componentID;
@property (readonly) NSString *name;
@property (readonly) NSString *version;

- (void).cxx_destruct;
- (id)componentID;
- (id)initWithComponentID:(id)arg1 name:(id)arg2 version:(id)arg3;
- (id)name;
- (id)version;

@end
