
@interface TRIPBSourceCodeInfo_Location : TRIPBMessage

@property (nonatomic) bool hasLeadingComments;
@property (nonatomic) bool hasTrailingComments;
@property (nonatomic, copy) NSString *leadingComments;
@property (nonatomic, retain) NSMutableArray *leadingDetachedCommentsArray;
@property (nonatomic, readonly) unsigned long long leadingDetachedCommentsArray_Count;
@property (nonatomic, retain) TRIPBInt32Array *pathArray;
@property (nonatomic, readonly) unsigned long long pathArray_Count;
@property (nonatomic, retain) TRIPBInt32Array *spanArray;
@property (nonatomic, readonly) unsigned long long spanArray_Count;
@property (nonatomic, copy) NSString *trailingComments;

+ (id)descriptor;

@end
