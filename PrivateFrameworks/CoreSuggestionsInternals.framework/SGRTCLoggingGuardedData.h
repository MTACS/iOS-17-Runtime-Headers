
@interface SGRTCLoggingGuardedData : NSObject {
    NSMutableArray * _loggedExtractions;
    NSMutableArray * _loggedInteractions;
    NSMutableArray * _loggedInteractionsSummary;
    double  _storeCreationDate;
}

- (void).cxx_destruct;

@end
