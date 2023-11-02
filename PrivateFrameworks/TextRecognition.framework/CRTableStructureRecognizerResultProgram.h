
@interface CRTableStructureRecognizerResultProgram : NSObject {
    NSString * _programString;
    struct vector<int, std::allocator<int>> { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::allocator<int>> { 
            int *__value_; 
        } __end_cap_; 
    }  _programTokenIdxs;
    NSArray * _programTokens;
    CRNormalizedQuad * _tableQuad;
}

@property (nonatomic, retain) NSString *programString;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<int' */ struct  programTokenIdxs; /* unknown property attribute:  std::allocator<int>>=^i}} */
@property (nonatomic, retain) NSArray *programTokens;
@property (nonatomic, retain) CRNormalizedQuad *tableQuad;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)programString;
- (struct vector<int, std::allocator<int>> { int *x1; int *x2; struct __compressed_pair<int *, std::allocator<int>> { int *x_3_1_1; } x3; })programTokenIdxs;
- (id)programTokens;
- (void)setProgramString:(id)arg1;
- (void)setProgramTokenIdxs:(struct vector<int, std::allocator<int>> { int *x1; int *x2; struct __compressed_pair<int *, std::allocator<int>> { int *x_3_1_1; } x3; })arg1;
- (void)setProgramTokens:(id)arg1;
- (void)setTableQuad:(id)arg1;
- (id)tableQuad;

@end
