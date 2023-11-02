
@interface _TtC13NewsAnalyticsP33_73410A717757B42F2A6F1BC37191285735NotificationReceiptReporterEndpoint : _TtCs12_SwiftObject <AAEndpointProvider> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  defaultURL;
    void name;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  notificationReceiptURL;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *sharedContainerIdentifier;
@property (nonatomic, readonly) NSURL *url;

- (id)endpointURLWithContentType:(long long)arg1;
- (id)name;
- (id)sharedContainerIdentifier;
- (id)url;

@end
