
@interface SLShareableContentLoadResult : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    NSString * _archivedObjectClassName;
    NSData * _data;
    NSError * _error;
    SLSecurityScopedURL * _urlWrapper;
    bool  _wasOpenedInPlace;
}

@property (nonatomic, readonly) Class archivedObjectClass;
@property (nonatomic, readonly, copy) NSString *archivedObjectClassName;
@property (nonatomic, readonly, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SLSecurityScopedURL *urlWrapper;
@property (nonatomic, readonly) bool wasOpenedInPlace;

+ (id)resultWithData:(id)arg1 archivedObjectClass:(Class)arg2 urlWrapper:(id)arg3 wasOpenedInPlace:(bool)arg4 error:(id)arg5;
+ (id)resultWithError:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)archivedObjectClass;
- (id)archivedObjectClassName;
- (id)data;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWithData:(id)arg1 archivedObjectClassName:(id)arg2 urlWrapper:(id)arg3 wasOpenedInPlace:(bool)arg4 error:(id)arg5;
- (id)urlWrapper;
- (bool)wasOpenedInPlace;

@end
