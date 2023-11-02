
@interface ARReferenceObject : NSObject <NSSecureCoding> {
    void _center;
    void _extent;
    NSUUID * _identifier;
    NSSet * _keyframes;
    NSString * _name;
    ARPointCloud * _rawFeaturePoints;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _referenceOriginTransform;
    NSString * _resourceGroupName;
    NSData * _trackingData;
    long long  _version;
}

@property (nonatomic, readonly) void center;
@property (nonatomic, readonly) void extent;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSSet *keyframes;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) ARPointCloud *rawFeaturePoints;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } referenceOriginTransform;
@property (nonatomic, readonly) NSString *resourceGroupName;
@property (nonatomic, readonly) void scale;
@property (nonatomic, readonly) NSData *trackingData;
@property (nonatomic, readonly) long long version;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

+ (id)referenceObjectsInGroupNamed:(id)arg1 bundle:(id)arg2;
+ (id)referenceObjectsInGroupNamed:(id)arg1 catalog:(id)arg2;
+ (id)referenceObjectsInGroupNamed:(id)arg1 catalogName:(id)arg2 bundle:(id)arg3;
+ (id)referenceObjectsInGroupNamed:(id)arg1 catalogURL:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)center;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exportObjectToMemoryWithPreviewImage:(id)arg1 error:(id*)arg2;
- (bool)exportObjectToURL:(id)arg1 previewImage:(id)arg2 error:(id*)arg3;
- (void)extent;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithArchive:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (id)initWithArchiveData:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (id)initWithArchiveURL:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrackingData:(id)arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (bool)isEqual:(id)arg1;
- (id)keyframes;
- (id)name;
- (id)rawFeaturePoints;
- (id)referenceObjectByApplyingTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (id)referenceObjectByMergingObject:(id)arg1 error:(id*)arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })referenceOriginTransform;
- (id)resourceGroupName;
- (void)scale;
- (void)setName:(id)arg1;
- (void)setResourceGroupName:(id)arg1;
- (id)trackingData;
- (long long)version;
- (id)writeToArchiveWithPreviewImage:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/ARKitUI.framework/ARKitUI

+ (void)initialize;

- (id)_writeToArchiveWithPreviewImage:(id)arg1 error:(id*)arg2;

@end
