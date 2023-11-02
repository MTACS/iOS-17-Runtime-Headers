
@interface TRIPBDescriptorProto_ExtensionRange : TRIPBMessage

@property (nonatomic) int end;
@property (nonatomic) bool hasEnd;
@property (nonatomic) bool hasOptions;
@property (nonatomic) bool hasStart;
@property (nonatomic, retain) TRIPBExtensionRangeOptions *options;
@property (nonatomic) int start;

+ (id)descriptor;

@end
