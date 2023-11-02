
@interface AVPrioritizedSize : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _currentTotalSize;
    NSMutableArray * _highPrioritySizes;
    NSMutableArray * _lowPrioritySizes;
    NSMutableArray * _mediumPrioritySizes;
    NSMutableArray * _requiredPrioritySizes;
    NSMutableArray * _veryHighPrioritySizes;
}

@property (nonatomic) struct CGSize { double x1; double x2; } currentTotalSize;
@property (nonatomic, retain) NSMutableArray *highPrioritySizes;
@property (nonatomic, retain) NSMutableArray *lowPrioritySizes;
@property (nonatomic, retain) NSMutableArray *mediumPrioritySizes;
@property (nonatomic, retain) NSMutableArray *requiredPrioritySizes;
@property (nonatomic, retain) NSMutableArray *veryHighPrioritySizes;

+ (id)sizesResolvingFirstPrioritizedSize:(id)arg1 secondPrioritizedSize:(id)arg2 inAvailableWidth:(double)arg3;

- (void).cxx_destruct;
- (void)addSize:(struct CGSize { double x1; double x2; })arg1 withPriority:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })currentTotalSize;
- (id)highPrioritySizes;
- (id)init;
- (id)lowPrioritySizes;
- (id)mediumPrioritySizes;
- (id)removeLastSizeOfPriority:(unsigned long long)arg1;
- (id)requiredPrioritySizes;
- (void)setCurrentTotalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHighPrioritySizes:(id)arg1;
- (void)setLowPrioritySizes:(id)arg1;
- (void)setMediumPrioritySizes:(id)arg1;
- (void)setRequiredPrioritySizes:(id)arg1;
- (void)setVeryHighPrioritySizes:(id)arg1;
- (id)veryHighPrioritySizes;

@end
