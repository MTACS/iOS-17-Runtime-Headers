
@interface MRE : NSObject {
    void * _mreInstance;
}

@property (nonatomic) void*mreInstance;

- (bool)ConvertException:(const struct exception { int (**x1)(); }*)arg1 toError:(id*)arg2;
- (bool)ConvertSystemError:(const struct system_error { int (**x1)(); struct __libcpp_refstring { char *x_2_1_1; } x2; struct error_code { int x_3_1_1; struct error_category {} *x_3_1_2; } x3; }*)arg1 toError:(id*)arg2;
- (bool)FillUnknownError:(id*)arg1;
- (void)dealloc;
- (id)initWithMREInstance:(void*)arg1 error:(id*)arg2;
- (id)initWithSignatures:(id)arg1 density:(long long)arg2 algorithm:(long long)arg3 error:(id*)arg4;
- (void*)mreInstance;
- (id)search:(id)arg1 error:(id*)arg2;
- (void)setMreInstance:(void*)arg1;

@end
