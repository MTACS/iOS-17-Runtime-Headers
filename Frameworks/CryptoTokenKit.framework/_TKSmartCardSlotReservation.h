
@interface _TKSmartCardSlotReservation : NSObject {
    bool  _exclusive;
    NSNumber * _protocols;
}

@property bool exclusive;
@property (retain) NSNumber *protocols;

- (void).cxx_destruct;
- (bool)exclusive;
- (id)protocols;
- (void)setExclusive:(bool)arg1;
- (void)setProtocols:(id)arg1;

@end
