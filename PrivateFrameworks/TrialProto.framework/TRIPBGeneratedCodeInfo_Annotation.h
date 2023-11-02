
@interface TRIPBGeneratedCodeInfo_Annotation : TRIPBMessage

@property (nonatomic) int begin;
@property (nonatomic) int end;
@property (nonatomic) bool hasBegin;
@property (nonatomic) bool hasEnd;
@property (nonatomic) bool hasSourceFile;
@property (nonatomic, retain) TRIPBInt32Array *pathArray;
@property (nonatomic, readonly) unsigned long long pathArray_Count;
@property (nonatomic, copy) NSString *sourceFile;

+ (id)descriptor;

@end
