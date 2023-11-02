
@interface MIOModel : NSObject <NSMutableCopying> {
    NSObject<MIOModeling> * _modelImpl;
}

@property (nonatomic, readonly) void*irProgram;
@property (nonatomic, readonly, copy) NSArray *layers;
@property (nonatomic, readonly, copy) MIOModelDescription *modelDescription;
@property (nonatomic, retain) NSObject<MIOModeling> *modelImpl;
@property (nonatomic, readonly, copy) NSString *modelTypeName;
@property (nonatomic, readonly, copy) MIOVersionInfo *specificationVersion;
@property (nonatomic, readonly, copy) NSArray *subModels;

- (void).cxx_destruct;
- (void)MIOFindProtobufFieldsDummyObjC;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithMessageStream:(struct CodedInputStream { char *x1; char *x2; struct ZeroCopyInputStream {} *x3; int x4; int x5; unsigned int x6; bool x7; bool x8; int x9; int x10; int x11; int x12; int x13; bool x14; struct DescriptorPool {} *x15; struct MessageFactory {} *x16; }*)arg1 parserContext:(id)arg2 error:(id*)arg3;
- (id)initWithModeling:(id)arg1;
- (void*)irProgram;
- (bool)isEqual:(id)arg1;
- (id)layerHistogram;
- (id)layers;
- (id)modelDescription;
- (id)modelImpl;
- (id)modelTypeName;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setModelDescription:(id)arg1;
- (void)setModelImpl:(id)arg1;
- (id)specificationVersion;
- (id)subModels;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
