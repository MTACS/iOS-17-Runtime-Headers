
@interface TSKShuffleMapping : NSObject <NSCopying> {
    unsigned short  mDestinationIndexForMove;
    unsigned short  mEndIndex;
    unsigned short  mFirstMovedIndex;
    bool  mIsMoveOperation;
    bool  mIsVertical;
    unsigned short * mMapping;
    unsigned short  mNumberOfIndicesMoved;
    unsigned short  mStartIndex;
}

@property (nonatomic, readonly) unsigned short endIndex;
@property (nonatomic, readonly) unsigned short*mapping;
@property (nonatomic, readonly) unsigned short mappingSize;
@property (nonatomic, readonly) unsigned short startIndex;

- (id)copyInverse;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned short)endIndex;
- (void)enumerateMappingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)initForMovedIndicesStartingAtIndex:(unsigned short)arg1 destinationIndex:(unsigned short)arg2 numberOfIndices:(unsigned short)arg3 vertical:(bool)arg4;
- (id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2;
- (id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2 mapping:(unsigned short*)arg3;
- (void)insert:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2 insertingBefore:(bool)arg3;
- (bool)isMove;
- (bool)isVertical;
- (unsigned short)mapIndex:(unsigned short)arg1;
- (unsigned short*)mapping;
- (unsigned short)mappingSize;
- (void)remove:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2;
- (unsigned short)reverseMapIndex:(unsigned short)arg1;
- (unsigned short)startIndex;
- (void)swapIndex:(unsigned short)arg1 withIndex:(unsigned short)arg2;

@end
