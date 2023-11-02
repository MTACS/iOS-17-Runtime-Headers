
@interface SIComponentIdentifier : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_uuid;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _uuid;
    void componentName;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (void).cxx_destruct;
- (long long)hash;
- (id)init;
- (id)initWithName:(int)arg1 schemaUUID:(id)arg2;
- (id)initWithName:(int)arg1 uuid:(id)arg2;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AIMLInstrumentationStreams.framework/AIMLInstrumentationStreams

- (id)description;

@end
