
@interface BWDeferredArrayIntermediate : BWDeferredDataIntermediate {
    NSArray * _array;
}

@property (nonatomic, readonly) NSArray *array;

+ (bool)supportsSecureCoding;

- (id)archive:(int*)arg1;
- (id)array;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchWithCustomClassesAndRetain:(id)arg1 err:(int*)arg2;
- (int)flush;
- (id)initWithArray:(id)arg1 tag:(id)arg2 URL:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (int)setArchive:(id)arg1;
- (int)setURL:(id)arg1 prefetchQueue:(id)arg2;

@end
