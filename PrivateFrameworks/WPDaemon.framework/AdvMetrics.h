
@interface AdvMetrics : NSObject {
    unsigned long long  droppedAdvCount;
    unsigned long long  totalAdvCount;
    unsigned long long  totalDroppedAdvCount;
}

- (unsigned long long)droppedAdvCountforType:(unsigned char)arg1 by:(unsigned char)arg2;
- (void)incrementDroppedAdvCountforType:(unsigned char)arg1 by:(unsigned char)arg2;
- (void)incrementTotalAdvCountforType:(unsigned char)arg1;
- (void)incrementTotalDroppedAdvCountforType:(unsigned char)arg1;
- (void)resetAllCounters;
- (unsigned long long)totalAdvCountforType:(unsigned char)arg1;
- (unsigned long long)totalDroppedAdvCountforType:(unsigned char)arg1;

@end
