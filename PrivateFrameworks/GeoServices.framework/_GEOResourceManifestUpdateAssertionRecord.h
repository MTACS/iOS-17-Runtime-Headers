
@interface _GEOResourceManifestUpdateAssertionRecord : NSObject <GEOResourceManifestUpdateAssertionRecord> {
    double  _creationTimestamp;
    NSString * _process;
    NSString * _reason;
}

@property (nonatomic, readonly) double creationTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *process;
@property (nonatomic, readonly) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)creationTimestamp;
- (id)description;
- (id)init;
- (id)initWithProcess:(id)arg1 reason:(id)arg2 creationTimestamp:(double)arg3;
- (bool)isExpired;
- (id)process;
- (id)reason;

@end
