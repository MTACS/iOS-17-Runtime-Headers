
@interface NSSingleCompletionCheckingResult : NSCompletionCheckingResult {
    NSIndexSet * _completeWordIndexes;
    bool  _isPromoted;
}

@property (readonly, copy) NSIndexSet *completeWordIndexes;
@property (readonly) bool isPromoted;
@property (readonly) unsigned long long stopCompletingIndex;

+ (bool)supportsSecureCoding;

- (id)completeWordIndexes;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementString:(id)arg2 completeWordIndexes:(id)arg3;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementString:(id)arg2 completeWordIndexes:(id)arg3 isPromoted:(bool)arg4;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementString:(id)arg2 stopCompletingIndex:(unsigned long long)arg3;
- (bool)isPromoted;
- (bool)isSingleCompletion;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (unsigned long long)resultType;
- (unsigned long long)stopCompletingIndex;

@end
