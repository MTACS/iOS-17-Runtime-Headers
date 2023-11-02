
@interface TRIPBFileDescriptorProto : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *dependencyArray;
@property (nonatomic, readonly) unsigned long long dependencyArray_Count;
@property (nonatomic, retain) NSMutableArray *enumTypeArray;
@property (nonatomic, readonly) unsigned long long enumTypeArray_Count;
@property (nonatomic, retain) NSMutableArray *extensionArray;
@property (nonatomic, readonly) unsigned long long extensionArray_Count;
@property (nonatomic) bool hasName;
@property (nonatomic) bool hasOptions;
@property (nonatomic) bool hasPackage;
@property (nonatomic) bool hasSourceCodeInfo;
@property (nonatomic) bool hasSyntax;
@property (nonatomic, retain) NSMutableArray *messageTypeArray;
@property (nonatomic, readonly) unsigned long long messageTypeArray_Count;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) TRIPBFileOptions *options;
@property (nonatomic, copy) NSString *package;
@property (nonatomic, retain) TRIPBInt32Array *publicDependencyArray;
@property (nonatomic, readonly) unsigned long long publicDependencyArray_Count;
@property (nonatomic, retain) NSMutableArray *serviceArray;
@property (nonatomic, readonly) unsigned long long serviceArray_Count;
@property (nonatomic, retain) TRIPBSourceCodeInfo *sourceCodeInfo;
@property (nonatomic, copy) NSString *syntax;
@property (nonatomic, retain) TRIPBInt32Array *weakDependencyArray;
@property (nonatomic, readonly) unsigned long long weakDependencyArray_Count;

+ (id)descriptor;

@end
