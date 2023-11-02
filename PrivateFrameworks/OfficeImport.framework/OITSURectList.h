
@interface OITSURectList : NSObject {
    struct vector<CGRect, std::allocator<CGRect>> { 
        struct CGRect {} *__begin_; 
        struct CGRect {} *__end_; 
        struct __compressed_pair<CGRect *, std::allocator<CGRect>> { 
            struct CGRect {} *__value_; 
        } __end_cap_; 
    }  mRectList;
}

@property (nonatomic, readonly) unsigned long long count;

+ (id)rectListWithDifference:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)count;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithRectList:(id)arg1;
- (void)insertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectAtIndex:(unsigned long long)arg1;

@end
