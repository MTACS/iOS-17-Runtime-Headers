
@interface ChronoCore.Task : NSObject {
    void allowCostOverride;
    void asyncWorkItem;
    void completion;
    void cost;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  creationDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void logDigest;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  powerlogWakeReason;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requiredDataProtectionLevel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  schedulingConfiguration;
    void schedulingOptions;
    void syncWorkItem;
    void target;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  taskIdentifier;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (id)description;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
