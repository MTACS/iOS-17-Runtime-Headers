
@interface TRIPBDescriptorProto : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *enumTypeArray;
@property (nonatomic, readonly) unsigned long long enumTypeArray_Count;
@property (nonatomic, retain) NSMutableArray *extensionArray;
@property (nonatomic, readonly) unsigned long long extensionArray_Count;
@property (nonatomic, retain) NSMutableArray *extensionRangeArray;
@property (nonatomic, readonly) unsigned long long extensionRangeArray_Count;
@property (nonatomic, retain) NSMutableArray *fieldArray;
@property (nonatomic, readonly) unsigned long long fieldArray_Count;
@property (nonatomic) bool hasName;
@property (nonatomic) bool hasOptions;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSMutableArray *nestedTypeArray;
@property (nonatomic, readonly) unsigned long long nestedTypeArray_Count;
@property (nonatomic, retain) NSMutableArray *oneofDeclArray;
@property (nonatomic, readonly) unsigned long long oneofDeclArray_Count;
@property (nonatomic, retain) TRIPBMessageOptions *options;
@property (nonatomic, retain) NSMutableArray *reservedNameArray;
@property (nonatomic, readonly) unsigned long long reservedNameArray_Count;
@property (nonatomic, retain) NSMutableArray *reservedRangeArray;
@property (nonatomic, readonly) unsigned long long reservedRangeArray_Count;

+ (id)descriptor;

@end
