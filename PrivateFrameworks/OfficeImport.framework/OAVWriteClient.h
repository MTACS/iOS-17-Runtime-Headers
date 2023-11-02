
@interface OAVWriteClient : NSObject

- (id)textWrapPointsForDrawable:(id)arg1 state:(id)arg2;
- (void)updateClientAnchorFromOrientedBoundsForDrawable:(id)arg1 state:(id)arg2;
- (void)writeClientDataFromDrawable:(id)arg1 toStyle:(id)arg2 state:(id)arg3;
- (void)writeClientDataFromDrawable:(id)arg1 toXmlWriter:(id)arg2 state:(id)arg3;

@end
