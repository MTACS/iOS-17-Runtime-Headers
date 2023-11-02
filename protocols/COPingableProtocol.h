
@protocol COPingableProtocol <NSObject>

@required

- (double)maximumPingInterval;
- (double)minimumPingInterval;
- (void)pingWithCallback:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, COMeshRequest *, COMeshResponse *, NSError *, void*
- (void)setMaximumPingInterval:(double)arg1;
- (void)setMinimumPingInterval:(double)arg1;

@end
