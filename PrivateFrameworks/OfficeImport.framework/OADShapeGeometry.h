
@interface OADShapeGeometry : NSObject {
    NSMutableDictionary * mAdjustValues;
    bool  mIsEscher;
}

- (void).cxx_destruct;
- (int)adjustValueAtIndex:(unsigned int)arg1;
- (unsigned long long)adjustValueCount;
- (id)adjustValues;
- (id)description;
- (id)equivalentCustomGeometry;
- (bool)hasAdjustValueAtIndex:(unsigned int)arg1;
- (id)init;
- (bool)isEscher;
- (void)setAdjustValue:(int)arg1 atIndex:(unsigned int)arg2;
- (void)setIsEscher:(bool)arg1;
- (int)type;

@end
