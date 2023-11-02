
@interface ATXDuetCallbackGuardedData : NSObject {
    NSMutableDictionary * _deletionHandlers;
    unsigned long long  nextRegistrationToken;
}

- (void).cxx_destruct;

@end
