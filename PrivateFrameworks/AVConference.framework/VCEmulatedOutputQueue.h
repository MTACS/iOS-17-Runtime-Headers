
@interface VCEmulatedOutputQueue : VCEmulatedNetworkElement {
    unsigned int  _numberOfPacketsInOutputQueue;
}

@property (nonatomic, readonly) unsigned int numberOfPacketsInOutputQueue;

- (void)connectFrom:(id)arg1;
- (id)copyPacketFromPop;
- (unsigned int)numberOfPacketsInOutputQueue;
- (void)runUntilTime:(double)arg1;

@end
