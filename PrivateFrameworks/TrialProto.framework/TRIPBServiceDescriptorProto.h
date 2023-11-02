
@interface TRIPBServiceDescriptorProto : TRIPBMessage

@property (nonatomic) bool hasName;
@property (nonatomic) bool hasOptions;
@property (nonatomic, retain) NSMutableArray *methodArray;
@property (nonatomic, readonly) unsigned long long methodArray_Count;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) TRIPBServiceOptions *options;

+ (id)descriptor;

@end
