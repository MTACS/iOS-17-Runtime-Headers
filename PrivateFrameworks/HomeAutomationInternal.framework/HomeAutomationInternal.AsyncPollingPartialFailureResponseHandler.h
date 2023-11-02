
@interface HomeAutomationInternal.AsyncPollingPartialFailureResponseHandler : HomeAutomationInternal.BaseAsyncResponseHandler {
    void entityResponsesInProgress;
    void entityResponsesInTarget;
    void failedEntityResponses;
    void reportResponsesInProgressAsFailures;
    void unreachableEntityResponses;
}

@end
