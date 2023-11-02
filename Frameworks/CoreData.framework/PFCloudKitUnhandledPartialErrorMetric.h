
@interface PFCloudKitUnhandledPartialErrorMetric : PFCloudKitBaseMetric {
    NSNumber * _errorCode;
    NSString * _errorDomain;
}

- (void)dealloc;
- (id)initWithContainerIdentifier:(id)arg1 error:(id)arg2;
- (id)name;
- (id)payload;

@end
