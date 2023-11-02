
@interface PXStoryComposabilityScoresArray : NSObject <NSCopying, NSMutableCopying, PXStoryComposabilityResults> {
    struct vector<PXStoryAutoEditComposabilityScores, std::allocator<PXStoryAutoEditComposabilityScores>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<PXStoryAutoEditComposabilityScores *, std::allocator<PXStoryAutoEditComposabilityScores>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _scores;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { float x1; float x2; })composabilityScoresAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)debugDescription;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithComposabilityResults:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
