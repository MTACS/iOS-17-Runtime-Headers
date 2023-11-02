
@interface CHPSeriesDateTimeFormatting : EDProcessor

- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (bool)isDateTimeFomrattingInData:(id)arg1;
- (bool)isDateTimeFormattingInContentFormatString:(id)arg1 edCell:(struct EDCellHeader { unsigned int x1; unsigned int x2; }*)arg2;
- (bool)isObjectSupported:(id)arg1;

@end
