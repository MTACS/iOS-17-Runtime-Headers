
@interface TRIPBEnumValueDescriptorProto : TRIPBMessage

@property (nonatomic) bool hasName;
@property (nonatomic) bool hasNumber;
@property (nonatomic) bool hasOptions;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int number;
@property (nonatomic, retain) TRIPBEnumValueOptions *options;

+ (id)descriptor;

@end
