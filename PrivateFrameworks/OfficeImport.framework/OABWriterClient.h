
@interface OABWriterClient : NSObject

- (unsigned short)eshSchemeColorIndexForOADSchemeColorValue:(int)arg1 state:(id)arg2;
- (void)writeClientAnchorFromDrawable:(id)arg1 toObject:(id)arg2 state:(id)arg3;
- (void)writeClientDataFromDrawable:(id)arg1 toObject:(id)arg2 state:(id)arg3;
- (void)writeClientDataFromTableCell:(id)arg1 toObject:(id)arg2 state:(id)arg3;
- (void)writeClientTextFromShape:(id)arg1 toObject:(id)arg2 state:(id)arg3;

@end
