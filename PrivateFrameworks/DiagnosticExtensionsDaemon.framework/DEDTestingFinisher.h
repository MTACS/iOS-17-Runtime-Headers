
@interface DEDTestingFinisher : NSObject <DEDFinisher, DEDSecureArchiving, NSSecureCoding> {
    DEDBugSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property DEDBugSession *session;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;
- (id)flattenDirectories:(id)arg1 progressHandler:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (id)session;
- (void)setSession:(id)arg1;
- (void)writeData:(id)arg1 filename:(id)arg2;

@end
