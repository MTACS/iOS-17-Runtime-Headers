
@interface LSDocumentProxy : LSResourceProxy <NSSecureCoding> {
    NSString * _MIMEType;
    NSURL * _URL;
    bool  _isContentManaged;
    NSString * _name;
    struct { 
        unsigned int val[8]; 
    }  _sourceAuditToken;
    NSString * _typeIdentifier;
}

@property (nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *containerOwnerApplicationIdentifier;
@property (getter=isContentManaged, nonatomic, readonly) bool contentManaged;
@property (getter=isImageOrVideo, readonly) bool imageOrVideo;
@property (nonatomic, readonly) const struct { unsigned int x1[8]; }*managedSourceAuditToken;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) const struct { unsigned int x1[8]; }*sourceAuditToken;
@property (nonatomic, readonly) bool sourceIsManaged;
@property (nonatomic, readonly) NSString *typeIdentifier;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 isContentManaged:(bool)arg4 sourceAuditToken:(const struct { unsigned int x1[8]; }*)arg5;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 managedSourceAuditToken:(const struct { unsigned int x1[8]; }*)arg4;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceIsManaged:(bool)arg4;
+ (id)documentProxyForURL:(id)arg1;
+ (id)documentProxyForURL:(id)arg1 isContentManaged:(bool)arg2 sourceAuditToken:(const struct { unsigned int x1[8]; }*)arg3;
+ (id)documentProxyForURL:(id)arg1 managedSourceAuditToken:(const struct { unsigned int x1[8]; }*)arg2;
+ (id)documentProxyForURL:(id)arg1 sourceIsManaged:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)URL;
- (struct optional<LaunchServices::BindingEvaluator> { union { BOOL x_1_1_1; struct BindingEvaluator { id x_2_2_1; id x_2_2_2; id x_2_2_3; id x_2_2_4; id x_2_2_5; id x_2_2_6; struct LSVersionNumber { unsigned char x_7_3_1[32]; } x_2_2_7; id x_2_2_8; bool x_2_2_9; bool x_2_2_10; unsigned long long x_2_2_11; unsigned int x_2_2_12; unsigned int x_2_2_13; struct vector<LSBundleClass, std::allocator<LSBundleClass>> { unsigned int *x_14_3_1; unsigned int *x_14_3_2; struct __compressed_pair<LSBundleClass *, std::allocator<LSBundleClass>> { unsigned int *x_3_4_1; } x_14_3_3; } x_2_2_14; id /* block */ x_2_2_15; id x_2_2_16; id /* block */ x_2_2_17; id x_2_2_18; } x_1_1_2; } x1; bool x2; })_bindingEvaluatorWithAuditToken:(const struct { unsigned int x1[8]; }*)arg1;
- (id)_boundIconInfo;
- (id)applicationsAvailableForOpeningByDraggingAndDroppingWithError:(id*)arg1;
- (id)applicationsAvailableForOpeningFromAirDropWithError:(id*)arg1;
- (id)applicationsAvailableForOpeningWithError:(id*)arg1;
- (id)applicationsAvailableForOpeningWithHandlerRanks:(id)arg1 error:(id*)arg2;
- (id)applicationsAvailableForOpeningWithStyle:(unsigned char)arg1 limit:(unsigned long long)arg2 XPCConnection:(id)arg3 error:(id*)arg4;
- (id)applicationsOrClaimBindings:(bool)arg1 availableForOpeningWithStyle:(unsigned char)arg2 handlerRank:(id)arg3 limit:(unsigned long long)arg4 XPCConnection:(id)arg5 error:(id*)arg6;
- (id)availableClaimBindingsForMode:(unsigned char)arg1 error:(id*)arg2;
- (id)availableClaimBindingsForMode:(unsigned char)arg1 handlerRank:(id)arg2 error:(id*)arg3;
- (id)availableClaimBindingsReturningError:(id*)arg1;
- (id)claimBindingsAvailableForOpeningWithStyle:(unsigned char)arg1 handlerRank:(id)arg2 limit:(unsigned long long)arg3 XPCConnection:(id)arg4 error:(id*)arg5;
- (id)containerOwnerApplicationIdentifier;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 name:(id)arg2 type:(id)arg3 MIMEType:(id)arg4 isContentManaged:(bool)arg5 sourceAuditToken:(const struct { unsigned int x1[8]; }*)arg6;
- (bool)isContentManaged;
- (bool)isImageOrVideo;
- (const struct { unsigned int x1[8]; }*)managedSourceAuditToken;
- (id)name;
- (const struct { unsigned int x1[8]; }*)sourceAuditToken;
- (bool)sourceIsManaged;
- (id)typeIdentifier;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

- (id)__IS_iconDataForVariant:(int)arg1 withOptions:(int)arg2;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (id)sf_documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceURL:(id)arg4;

@end
