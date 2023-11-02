
@interface _UIBoxedAutoreleasePoolMark : NSObject {
    void * _mark;
}

@property (nonatomic) void*mark;

- (id)initWithAutoreleasePoolMark:(void*)arg1;
- (void*)mark;
- (void)setMark:(void*)arg1;

@end
