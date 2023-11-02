
@interface MKTableRow : NSObject {
    NSArray * _cells;
    NSString * _divider;
    long long  _totalColumns;
}

@property (nonatomic, retain) NSArray *cells;
@property (nonatomic, retain) NSString *divider;
@property (nonatomic) long long totalColumns;

+ (id)rowWithCells:(id)arg1;
+ (id)rowWithTitle:(id)arg1;
+ (id)separatorRow;

- (void).cxx_destruct;
- (void)adjustColumnsToFit:(id)arg1;
- (id)asciiRepresentationUsingColumns:(id)arg1;
- (id)cells;
- (id)csvRepresentation;
- (id)csvSafeValueForCell:(id)arg1;
- (id)divider;
- (id)formattedValueForCell:(id)arg1;
- (id)init;
- (void)setCells:(id)arg1;
- (void)setDivider:(id)arg1;
- (void)setTotalColumns:(long long)arg1;
- (long long)totalColumns;
- (int)totalWidthOfColumns:(id)arg1;

@end
