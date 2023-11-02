
@interface ICCFTypeWrapper : NSObject {
    void * _cfTypeRef;
}

@property (nonatomic) void*cfTypeRef;

- (void*)cfTypeRef;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCFTypeRef:(void*)arg1;
- (bool)isEqual:(id)arg1;
- (void*)ref;
- (void)setCfTypeRef:(void*)arg1;

@end
