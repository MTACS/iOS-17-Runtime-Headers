
@interface PFCloudKitFatalErrorMetric : PFCloudKitUnhandledPartialErrorMetric {
    NSString * _requestClass;
}

- (void)dealloc;
- (id)initWithContainerIdentifier:(id)arg1 result:(id)arg2;
- (id)name;
- (id)payload;

@end
