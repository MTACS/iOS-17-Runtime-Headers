
@interface CLPCReportingStatSelection : NSObject {
    struct array<bool, 23UL> { 
        bool __elems_[23]; 
    }  selection;
}

- (void)deselectAll;
- (bool)deselectStat:(unsigned long long)arg1 error:(id*)arg2;
- (bool)deselectStatsOfSchema:(unsigned long long)arg1 error:(id*)arg2;
- (void)enumerate:(id /* block */)arg1;
- (id)init;
- (unsigned long long)isSelected:(unsigned long long)arg1 error:(id*)arg2;
- (void)selectAll;
- (bool)selectStat:(unsigned long long)arg1 error:(id*)arg2;
- (bool)selectStatsOfSchema:(unsigned long long)arg1 error:(id*)arg2;

@end
