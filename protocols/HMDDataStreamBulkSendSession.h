
@protocol HMDDataStreamBulkSendSession <NSObject>

@required

- (void)cancelWithReason:(unsigned short)arg1;
- (bool)isActive;
- (void)read:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
