
@interface VisionCoreE5RTProgramLibrary : NSObject <NSCopying> {
    VisionCoreE5RTProgramLibraryCompilationOptions * _compilationOptions;
    NSArray * _lazyFunctionNames;
    NSString * _lazyName;
    NSURL * _modelURL;
    struct e5rt_program_library { } * _programLibraryHandle;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly, copy) NSDictionary *buildInfo;
@property (nonatomic, readonly, copy) NSArray *functionNames;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) struct e5rt_program_library { }*programLibraryHandle;

+ (id)compileFromURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)compileModelSource:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)isProgramLibraryAtURL:(id)arg1;
+ (id)programLibraryForURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithURL:(id)arg1 compilationOptions:(id)arg2 ownedProgramLibraryHandle:(struct e5rt_program_library {}**)arg3;
- (id)buildInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)functionNamed:(id)arg1 error:(id*)arg2;
- (id)functionNames;
- (id)metadataForFunctionNamed:(id)arg1 error:(id*)arg2;
- (id)name;
- (struct e5rt_program_library { }*)programLibraryHandle;

@end
