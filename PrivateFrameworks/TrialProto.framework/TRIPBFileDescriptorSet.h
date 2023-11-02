
@interface TRIPBFileDescriptorSet : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *fileArray;
@property (nonatomic, readonly) unsigned long long fileArray_Count;

+ (id)descriptor;

@end
