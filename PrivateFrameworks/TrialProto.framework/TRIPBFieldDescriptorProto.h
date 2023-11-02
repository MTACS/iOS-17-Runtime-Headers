
@interface TRIPBFieldDescriptorProto : TRIPBMessage

@property (nonatomic, copy) NSString *defaultValue;
@property (nonatomic, copy) NSString *extendee;
@property (nonatomic) bool hasDefaultValue;
@property (nonatomic) bool hasExtendee;
@property (nonatomic) bool hasJsonName;
@property (nonatomic) bool hasLabel;
@property (nonatomic) bool hasName;
@property (nonatomic) bool hasNumber;
@property (nonatomic) bool hasOneofIndex;
@property (nonatomic) bool hasOptions;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasTypeName;
@property (nonatomic, copy) NSString *jsonName;
@property (nonatomic) int label;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int number;
@property (nonatomic) int oneofIndex;
@property (nonatomic, retain) TRIPBFieldOptions *options;
@property (nonatomic) int type;
@property (nonatomic, copy) NSString *typeName;

+ (id)descriptor;

@end
