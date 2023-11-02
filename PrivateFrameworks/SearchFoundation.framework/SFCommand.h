
@interface SFCommand : NSObject <NSCopying, NSSecureCoding, SFCommand> {
    NSData * _backendData;
    NSString * _commandDetail;
    SFTopic * _normalizedTopic;
}

@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
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
- (id)backendData;
- (id)commandDetail;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)embeddedCards;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)normalizedTopic;
- (void)setBackendData:(id)arg1;
- (void)setCommandDetail:(id)arg1;
- (void)setNormalizedTopic:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)_cpCommandType;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUICommandHandlerClass;
- (id)_searchUI_actionType;
- (id)_searchUI_contact;
- (id)_searchui_completionImage;
- (id)_searchui_overriddenBridgeString;
- (id)_searchui_overriddenExtensionString;
- (id)_searchui_prefixMatchExtensionString;

@end
