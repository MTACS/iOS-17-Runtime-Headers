
@interface WorkoutCore.ExternalProvider : _TtCs12_SwiftObject <WOPersistableObject> {
    void sourceBundleIdentifier;
    void sourceImageData;
    void sourceName;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  syncStartDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  uuid;
}

+ (id)deserializeFromPersistence:(id)arg1;

- (id)serialize;

@end
