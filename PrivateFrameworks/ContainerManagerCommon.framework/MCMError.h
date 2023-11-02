
@interface MCMError : NSObject <NSCopying> {
    int  _POSIXerrno;
    unsigned long long  _category;
    NSString * _path;
    unsigned long long  _type;
}

@property (nonatomic, readonly) int POSIXerrno;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (int)POSIXerrno;
- (unsigned long long)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fullDescription;
- (unsigned long long)hash;
- (id)init;
- (id)initWithErrorType:(unsigned long long)arg1;
- (id)initWithErrorType:(unsigned long long)arg1 category:(unsigned long long)arg2;
- (id)initWithErrorType:(unsigned long long)arg1 category:(unsigned long long)arg2 path:(id)arg3 POSIXerrno:(int)arg4;
- (id)initWithLibsystemError:(struct container_error_extended_s { unsigned long long x1; unsigned long long x2; char *x3; int x4; struct container_query_s {} *x5; struct container_references_s {} *x6; }*)arg1;
- (id)initWithNSError:(id)arg1 url:(id)arg2 defaultErrorType:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMCMError:(id)arg1;
- (struct container_error_extended_s { unsigned long long x1; unsigned long long x2; char *x3; int x4; struct container_query_s {} *x5; struct container_references_s {} *x6; }*)libsystemError;
- (id)path;
- (unsigned long long)type;

@end
