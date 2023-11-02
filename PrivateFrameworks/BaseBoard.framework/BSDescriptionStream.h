
@interface BSDescriptionStream : NSObject <BSDescriptionFormatting, BSDescriptionStringAppendTarget> {
    unsigned char  _appendBuffer;
    long long  _appendBufferCount;
    long long  _emitPhase;
    long long  _groupItemCount;
    long long  _groupVerbosityOptions;
    long long  _indentLevel;
    NSString * _pendingFieldTerminator;
    bool  _sortKeys;
    NSMutableString * _string;
    bool  _verboseSingleItemCollections;
}

@property (nonatomic) bool sortKeys;
@property (nonatomic) bool verboseSingleItemCollections;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)descriptionForRootObject:(id)arg1;

- (void).cxx_destruct;
- (void)appendBodySectionWithName:(id)arg1 block:(id /* block */)arg2;
- (void)appendBodySectionWithName:(id)arg1 openDelimiter:(id)arg2 closeDelimiter:(id)arg3 block:(id /* block */)arg4;
- (void)appendBodySectionWithOpenDelimiter:(id)arg1 closeDelimiter:(id)arg2 block:(id /* block */)arg3;
- (id)appendBool:(bool)arg1 withName:(id)arg2;
- (id)appendBool:(bool)arg1 withName:(id)arg2 ifEqualTo:(bool)arg3;
- (id)appendCString:(const char *)arg1 withName:(id)arg2;
- (id)appendClass:(Class)arg1 withName:(id)arg2;
- (void)appendCollection:(id)arg1 withName:(id)arg2 itemBlock:(id /* block */)arg3;
- (void)appendCustomFormatWithName:(id)arg1 block:(id /* block */)arg2;
- (void)appendDictionary:(id)arg1 withName:(id)arg2 itemBlock:(id /* block */)arg3;
- (id)appendDouble:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
- (id)appendFlag:(long long)arg1 withName:(id)arg2;
- (id)appendFlag:(long long)arg1 withName:(id)arg2 skipIfNotSet:(bool)arg3;
- (id)appendFloat:(double)arg1 withName:(id)arg2;
- (id)appendFloat:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
- (void)appendFormat:(id)arg1;
- (id)appendInt64:(long long)arg1 withName:(id)arg2;
- (id)appendInt:(int)arg1 withName:(id)arg2;
- (id)appendInteger:(long long)arg1 withName:(id)arg2;
- (void)appendIntegerMap:(id)arg1 withName:(id)arg2 keyFormat:(long long)arg3 valueBlock:(id /* block */)arg4;
- (void)appendIntegerSet:(id)arg1 withName:(id)arg2 format:(long long)arg3;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(bool)arg3;
- (id)appendPoint:(struct CGPoint { double x1; double x2; })arg1 withName:(id)arg2;
- (id)appendPointer:(void*)arg1 withName:(id)arg2;
- (void)appendProem:(id)arg1 block:(id /* block */)arg2;
- (id)appendQueue:(id)arg1 withName:(id)arg2;
- (id)appendRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withName:(id)arg2;
- (void)appendRightArrow;
- (id)appendSelector:(SEL)arg1 withName:(id)arg2;
- (id)appendSize:(struct CGSize { double x1; double x2; })arg1 withName:(id)arg2;
- (void)appendString:(id)arg1;
- (void)appendString:(id)arg1 withName:(id)arg2;
- (void)appendString:(id)arg1 withName:(id)arg2 skipIfEmpty:(bool)arg3;
- (id)appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(bool)arg3;
- (id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2;
- (id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3;
- (id)appendUnsignedInt:(unsigned int)arg1 withName:(id)arg2;
- (id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;
- (id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3;
- (id)appendVersionedPID:(long long)arg1 withName:(id)arg2;
- (id)description;
- (id)init;
- (void)sameLine:(id /* block */)arg1;
- (void)setSortKeys:(bool)arg1;
- (void)setVerboseSingleItemCollections:(bool)arg1;
- (bool)sortKeys;
- (bool)verboseSingleItemCollections;

// Image: /System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices

- (void)bls_appendBoundedCollection:(id)arg1 withName:(id)arg2 maximumItems:(long long)arg3 itemBlock:(id /* block */)arg4;
- (id)bls_appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(bool)arg3;

@end
