
@interface TRIPBOneofDescriptorProto : TRIPBMessage

@property (nonatomic) bool hasName;
@property (nonatomic) bool hasOptions;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) TRIPBOneofOptions *options;

+ (id)descriptor;

@end
