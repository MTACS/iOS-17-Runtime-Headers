
@interface ABSVCardRecord : NSObject {
    void * _record;
}

@property (nonatomic, readonly) void*record;

- (void)dealloc;
- (id)initWithRecord:(void*)arg1;
- (id)initWithVCardRepresentation:(id)arg1;
- (void*)record;

@end
