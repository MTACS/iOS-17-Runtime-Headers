
@interface SLShareableContentMetadata : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSURL * _highlightURL;
    NSString * _initiatorHandle;
    NSPersonNameComponents * _initiatorNameComponents;
    LPLinkMetadata * _metadata;
    NSArray * _representations;
    NSString * _sceneIdentifier;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *highlightURL;
@property (nonatomic, copy) NSString *initiatorHandle;
@property (nonatomic, retain) NSPersonNameComponents *initiatorNameComponents;
@property (nonatomic, readonly) LPLinkMetadata *metadata;
@property (nonatomic, readonly, copy) NSArray *representations;
@property (nonatomic, readonly, copy) NSString *sceneIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)highlightURL;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSceneIdentifier:(id)arg1 bundleIdentifier:(id)arg2 representations:(id)arg3 metadata:(id)arg4 highlightURL:(id)arg5;
- (id)initiatorHandle;
- (id)initiatorNameComponents;
- (id)metadata;
- (id)representations;
- (id)sceneIdentifier;
- (void)setInitiatorHandle:(id)arg1;
- (void)setInitiatorNameComponents:(id)arg1;

@end
