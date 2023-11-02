
@protocol BRLTPrintPreprocessor <NSObject>

@required

- (NSString *)preprocessPrintString:(NSString *)arg1 withLocationMap:(id*)arg2 isEightDot:(bool)arg3 textFormattingRanges:(BRLTTextFormattingRanges *)arg4;

@end
