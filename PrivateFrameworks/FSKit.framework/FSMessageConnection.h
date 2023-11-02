
@interface FSMessageConnection : NSObject <FSTaskMessageOps, FSTaskOps, NSSecureCoding> {
    NSXPCConnection * _connection;
    NSXPCListenerEndpoint * _endpoint;
    bool  _hasCompleted;
    NSLocale * _locale;
    NSArray * _preferredLanguages;
}

@property (readonly) NSXPCConnection *connection;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) bool hasCompleted;
@property (readonly) NSLocale *locale;
@property (readonly) NSArray *preferredLanguages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)completed:(id)arg1 reply:(id /* block */)arg2;
- (void)connect:(id /* block */)arg1;
- (id)connection;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (void)getLocalizationSetup:(id /* block */)arg1;
- (bool)hasCompleted;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (id)locale;
- (id)localizedMessage:(id)arg1 table:(id)arg2 bundle:(id)arg3;
- (id)localizedMessage:(id)arg1 table:(id)arg2 bundle:(id)arg3 arguments:(char *)arg4;
- (id)localizedMessage:(id)arg1 table:(id)arg2 bundle:(id)arg3 array:(id)arg4;
- (void)logLocalizedMessage:(id)arg1 table:(id)arg2 bundle:(id)arg3;
- (void)logLocalizedMessage:(id)arg1 table:(id)arg2 bundle:(id)arg3 arguments:(char *)arg4;
- (void)logLocalizedMessage:(id)arg1 table:(id)arg2 bundle:(id)arg3 array:(id)arg4;
- (void)logMessage:(id)arg1;
- (id)preferredLanguages;
- (void)prompt:(id)arg1 reply:(id /* block */)arg2;
- (void)promptTrueFalse:(id)arg1 reply:(id /* block */)arg2;

@end
