
@interface MPCFWrapper : NSObject {
    bool  _nullRef;
    void * _refValue;
}

@property (getter=isNullRef, nonatomic) bool nullRef;
@property (nonatomic, readonly) void*refValue;

- (void)dealloc;
- (id)description;
- (id)initWithCFType:(void*)arg1;
- (bool)isNullRef;
- (void*)refValue;
- (void)setNullRef:(bool)arg1;

@end
