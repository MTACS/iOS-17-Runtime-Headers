
@interface AudioAnalyticsExternal.DurationSummaryState : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  config;
    void currentFlattenedMessage;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentMessage;
    void isRunning;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void messageNumber;
    void messagesOutOfOrder;
    void mostRecentTimestamp;
    void originalTimeOffset;
    void previousValues;
    void requiredKeyValues;
    void seenFields;
    void session;
    void startAaTimestamp;
    void vocoderSettings;
}

@end
