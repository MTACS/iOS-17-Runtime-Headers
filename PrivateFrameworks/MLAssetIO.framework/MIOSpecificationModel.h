
@interface MIOSpecificationModel : NSObject <MIOModeling> {
    struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> { 
        struct __compressed_pair<MIL::IRProgram *, std::default_delete<MIL::IRProgram>> { 
            struct IRProgram {} *__value_; 
        } __ptr_; 
    }  _irProgram;
    NSDictionary * _layerHistogram;
    NSArray * _layers;
    MIOModelDescription * _modelDescription;
    NSString * _modelTypeName;
    MIOParserContext * _parserContext;
    NSData * _specificationData;
    MIOVersionInfo * _specificationVersion;
    NSArray * _subModels;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*irProgram;
@property (nonatomic, readonly, copy) NSDictionary *layerHistogram;
@property (nonatomic, readonly, copy) NSArray *layers;
@property (nonatomic, copy) MIOModelDescription *modelDescription;
@property (nonatomic, readonly, copy) NSString *modelTypeName;
@property (nonatomic, readonly, copy) MIOParserContext *parserContext;
@property (nonatomic, readonly, copy) NSData *specificationData;
@property (nonatomic, readonly, copy) MIOVersionInfo *specificationVersion;
@property (nonatomic, readonly, copy) NSArray *subModels;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithMessageStream:(struct CodedInputStream { char *x1; char *x2; struct ZeroCopyInputStream {} *x3; int x4; int x5; unsigned int x6; bool x7; bool x8; int x9; int x10; int x11; int x12; int x13; bool x14; struct DescriptorPool {} *x15; struct MessageFactory {} *x16; }*)arg1 parserContext:(id)arg2 error:(id*)arg3;
- (id)initWithSpecificationData:(id)arg1 parserContext:(id)arg2 error:(id*)arg3;
- (void*)irProgram;
- (bool)isEqual:(id)arg1;
- (id)layerHistogram;
- (id)layers;
- (id)modelDescription;
- (id)modelTypeName;
- (id)parserContext;
- (void)setModelDescription:(id)arg1;
- (id)specificationData;
- (id)specificationVersion;
- (id)subModels;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
