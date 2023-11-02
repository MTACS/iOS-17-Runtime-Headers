
@interface BRLTUnicodePrintPreprocessor : NSObject <BRLTPrintPreprocessor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)preprocessPrintString:(id)arg1 withLocationMap:(id*)arg2 isEightDot:(bool)arg3 textFormattingRanges:(id)arg4;

@end
