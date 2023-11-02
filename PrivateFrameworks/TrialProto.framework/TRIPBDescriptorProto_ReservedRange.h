
@interface TRIPBDescriptorProto_ReservedRange : TRIPBMessage

@property (nonatomic) int end;
@property (nonatomic) bool hasEnd;
@property (nonatomic) bool hasStart;
@property (nonatomic) int start;

+ (id)descriptor;

@end
