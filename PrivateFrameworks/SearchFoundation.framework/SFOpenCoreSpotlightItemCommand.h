
@interface SFOpenCoreSpotlightItemCommand : SFCommand <NSCopying, NSSecureCoding, SFOpenCoreSpotlightItemCommand> {
    NSString * _actionIdentifier;
    NSString * _applicationBundleIdentifier;
    NSString * _coreSpotlightIdentifier;
}

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
@property (nonatomic, copy) NSString *coreSpotlightIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)applicationBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreSpotlightIdentifier;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setActionIdentifier:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setCoreSpotlightIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)_cpCommandType;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUICommandHandlerClass;
- (id)_searchui_completionImage;
- (id)_searchui_prefixMatchExtensionString;

@end
