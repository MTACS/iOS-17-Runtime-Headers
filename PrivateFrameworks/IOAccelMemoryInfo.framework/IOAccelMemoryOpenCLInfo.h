
@interface IOAccelMemoryOpenCLInfo : NSObject {
    id  _expansionData;
    NSString * cl_context;
    unsigned long long  cl_mem;
    NSString * objectDescription;
    NSString * objectType;
    int  pid;
}

@property (retain) NSString *cl_context;
@property unsigned long long cl_mem;
@property (retain) NSString *objectDescription;
@property (retain) NSString *objectType;
@property int pid;

- (id)cl_context;
- (unsigned long long)cl_mem;
- (void)dealloc;
- (id)description;
- (id)objectDescription;
- (id)objectType;
- (int)pid;
- (void)setCl_context:(id)arg1;
- (void)setCl_mem:(unsigned long long)arg1;
- (void)setObjectDescription:(id)arg1;
- (void)setObjectType:(id)arg1;
- (void)setPid:(int)arg1;

@end
