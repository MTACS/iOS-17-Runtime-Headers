
@interface Coherence.ObjCRenames : NSObject {
    void renames;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long generation;
@property (nonatomic, readonly) bool hasLocalRenames;

- (void).cxx_destruct;
- (long long)count;
- (id)description;
- (long long)generation;
- (bool)hasLocalRenames;
- (id)init;
- (id)renamed:(id)arg1;
- (id)renamed:(long long)arg1 replica:(id)arg2;
- (id)renamedWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replica:(id)arg2;

@end
