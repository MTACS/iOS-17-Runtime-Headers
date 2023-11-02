
@interface EARKeywordFinder : NSObject {
    struct unique_ptr<quasar::KeywordFinder, std::default_delete<quasar::KeywordFinder>> { 
        struct __compressed_pair<quasar::KeywordFinder *, std::default_delete<quasar::KeywordFinder>> { 
            struct KeywordFinder {} *__value_; 
        } __ptr_; 
    }  _kwf;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)correctedResultWithKeyword:(id)arg1 tokenizedKeyword:(id)arg2 preItnSausage:(id)arg3 preItnOneBest:(id)arg4 preItnOneBestIndices:(id)arg5 nbestSize:(long long)arg6;
- (id)initWithConfiguration:(id)arg1;

@end
