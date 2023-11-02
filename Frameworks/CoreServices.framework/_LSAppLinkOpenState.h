
@interface _LSAppLinkOpenState : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    NSXPCConnection * _XPCConnection;
    struct optional<audit_token_t> { 
        union { 
            BOOL __null_state_; 
            struct { 
                unsigned int val[8]; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _auditToken;
    NSDictionary * _browserState;
    NSString * _bundleIdentifier;
    bool  _includeLinksForCallingApplication;
    _LSOpenConfiguration * _openConfiguration;
}

@property (copy) NSURL *URL;
@property (nonatomic, retain) NSXPCConnection *XPCConnection;
@property (nonatomic) const struct { unsigned int x1[8]; }*auditToken;
@property (copy) NSDictionary *browserState;
@property (copy) NSString *bundleIdentifier;
@property bool includeLinksForCallingApplication;
@property (retain) _LSOpenConfiguration *openConfiguration;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)URL;
- (id)XPCConnection;
- (const struct { unsigned int x1[8]; }*)auditToken;
- (id)browserState;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeLinksForCallingApplication;
- (id)initWithCoder:(id)arg1;
- (id)openConfiguration;
- (void)setAuditToken:(const struct { unsigned int x1[8]; }*)arg1;
- (void)setBrowserState:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setIncludeLinksForCallingApplication:(bool)arg1;
- (void)setOpenConfiguration:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setXPCConnection:(id)arg1;

@end
