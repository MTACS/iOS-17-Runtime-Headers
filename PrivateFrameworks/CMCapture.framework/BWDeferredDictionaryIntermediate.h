
@interface BWDeferredDictionaryIntermediate : BWDeferredDataIntermediate {
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly) NSDictionary *dictionary;

+ (bool)supportsSecureCoding;

- (id)archive:(int*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchWithCustomClassesAndRetain:(id)arg1 err:(int*)arg2;
- (int)flush;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 tag:(id)arg2 URL:(id)arg3;
- (int)setArchive:(id)arg1;
- (int)setURL:(id)arg1 prefetchQueue:(id)arg2;

@end
