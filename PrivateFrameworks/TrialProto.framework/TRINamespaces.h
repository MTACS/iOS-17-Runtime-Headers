
@interface TRINamespaces : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *namespaceIdArray;
@property (nonatomic, readonly) unsigned long long namespaceIdArray_Count;

+ (id)descriptor;

@end
