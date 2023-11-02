
@interface DocumentManagerExecutables.DOCUnicode : NSObject {
    void rawValue;
}

+ (id)bidiIsolateBeginFSI;
+ (id)bidiIsolateBeginLRI;
+ (id)bidiIsolateBeginRLI;
+ (id)bidiIsolateEnd;
+ (id)horizontalEllipsis;
+ (long long)layoutDirectionForUIDirection:(long long)arg1;
+ (id)nonBreakingSpace;
+ (id)nonBreakingSpaceWithZeroWidth:(bool)arg1;
+ (id)nonBreakingSpace_zeroWidth;
+ (id)uc:(id)arg1;

- (void).cxx_destruct;
- (id)init;

@end
