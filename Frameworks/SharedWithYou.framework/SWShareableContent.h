
@interface SWShareableContent : NSObject <NSSecureCoding> {
    NSURL * _highlightURL;
    NSString * _initiatorHandle;
    NSPersonNameComponents * _initiatorNameComponents;
    LPLinkMetadata * _metadata;
    <SWShareableContentRepresentationProvider> * _representationProvider;
    NSArray * _representations;
    NSString * _sourceBundleIdentifier;
    NSString * _sourceSceneIdentifier;
}

@property (nonatomic, readonly) bool hasPossibleCollaborationRepresentation;
@property (nonatomic, readonly) NSURL *highlightURL;
@property (nonatomic, readonly, copy) NSString *initiatorHandle;
@property (nonatomic, readonly) NSPersonNameComponents *initiatorNameComponents;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly, copy) NSArray *itemProviders;
@property (nonatomic, readonly) LPLinkMetadata *metadata;
@property (nonatomic, retain) <SWShareableContentRepresentationProvider> *representationProvider;
@property (nonatomic, readonly, copy) NSArray *representations;
@property (nonatomic, readonly, copy) NSString *sourceBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceSceneIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canLoadObjectOfClass:(Class)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPossibleCollaborationRepresentation;
- (bool)hasRepresentationConformingToTypeIdentifier:(id)arg1;
- (id)highlightURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceSceneIdentifier:(id)arg1 sourceBundleIdentifier:(id)arg2 metadata:(id)arg3 representations:(id)arg4 highlightURL:(id)arg5 initiatorHandle:(id)arg6 initiatorNameComponents:(id)arg7;
- (id)initiatorHandle;
- (id)initiatorNameComponents;
- (id)itemProvider;
- (id)itemProviders;
- (void)loadRepresentationForTypeIdentifier:(id)arg1 itemProviderIndex:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)metadata;
- (id)registeredOpenInPlaceTypeIdentifiers;
- (id)registeredTypeIdentifiers;
- (id)representationProvider;
- (id)representations;
- (void)setRepresentationProvider:(id)arg1;
- (id)sourceApplicationIdentifier;
- (id)sourceBundleIdentifier;
- (id)sourceIdentifier;
- (id)sourceSceneIdentifier;

@end
