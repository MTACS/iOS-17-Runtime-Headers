
@interface MIOPackagedFileModel : NSObject <MIOModeling> {
    MIOModelDescription * _modelDescription;
    NSURL * _packageURL;
    NSObject<MIOModeling> * _specificationFileModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*irProgram;
@property (nonatomic, readonly, copy) NSDictionary *layerHistogram;
@property (nonatomic, readonly, copy) NSArray *layers;
@property (nonatomic, copy) MIOModelDescription *modelDescription;
@property (nonatomic, readonly, copy) NSString *modelTypeName;
@property (nonatomic, copy) NSURL *packageURL;
@property (nonatomic, copy) NSObject<MIOModeling> *specificationFileModel;
@property (nonatomic, readonly, copy) MIOVersionInfo *specificationVersion;
@property (nonatomic, readonly, copy) NSArray *subModels;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithModel:(id)arg1;
- (void*)irProgram;
- (bool)isEqual:(id)arg1;
- (id)layerHistogram;
- (id)layers;
- (id)modelDescription;
- (id)modelTypeName;
- (id)packageURL;
- (void)setModelDescription:(id)arg1;
- (void)setPackageURL:(id)arg1;
- (void)setSpecificationFileModel:(id)arg1;
- (id)specificationFileModel;
- (id)specificationVersion;
- (id)subModels;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
