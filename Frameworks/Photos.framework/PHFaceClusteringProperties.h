
@interface PHFaceClusteringProperties : PHFacePropertySet {
    PHFaceprint * _faceprint;
    NSString * _groupingIdentifier;
}

@property (nonatomic, readonly) PHFaceprint *faceprint;
@property (nonatomic, readonly) NSString *groupingIdentifier;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)faceprint;
- (id)groupingIdentifier;
- (id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(bool)arg3;

@end
