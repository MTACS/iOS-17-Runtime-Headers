
@interface TRIPBMethodDescriptorProto : TRIPBMessage

@property (nonatomic) bool clientStreaming;
@property (nonatomic) bool hasClientStreaming;
@property (nonatomic) bool hasInputType;
@property (nonatomic) bool hasName;
@property (nonatomic) bool hasOptions;
@property (nonatomic) bool hasOutputType;
@property (nonatomic) bool hasServerStreaming;
@property (nonatomic, copy) NSString *inputType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) TRIPBMethodOptions *options;
@property (nonatomic, copy) NSString *outputType;
@property (nonatomic) bool serverStreaming;

+ (id)descriptor;

@end
