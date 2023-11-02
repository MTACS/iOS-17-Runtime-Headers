
@interface TRICKOpCancelingGuardedData : NSObject {
    bool  cancelReceived;
    NSMutableArray * opsInFlight;
}

- (void).cxx_destruct;

@end
