
@interface _CUIPSDSublayerInfo : NSObject {
    unsigned int  _numOfSublayers;
}

+ (id)newWithSublayerCount:(unsigned int)arg1 indexSet:(id)arg2;

- (unsigned int)numberOfSublayers;
- (unsigned int)sublayerAtIndex:(unsigned int)arg1 isValid:(bool*)arg2;

@end
