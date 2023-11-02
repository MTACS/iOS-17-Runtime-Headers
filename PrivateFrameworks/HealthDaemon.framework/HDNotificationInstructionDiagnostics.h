
@interface HDNotificationInstructionDiagnostics : NSObject {
    NSISO8601DateFormatter * _formatter;
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (bool)enumerateAllNotificationInstructionsWithError:(id*)arg1 enumerationHandler:(id /* block */)arg2;
- (id)initWithProfile:(id)arg1;

@end
