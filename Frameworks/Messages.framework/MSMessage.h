
@interface MSMessage : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    NSData * __data;
    NSString * _accessibilityLabel;
    NSString * _breadcrumbText;
    NSError * _error;
    bool  _isFromMe;
    MSMessageLayout * _layout;
    bool  _pending;
    bool  _requiresValidation;
    NSString * _senderAddress;
    NSUUID * _senderParticipantIdentifier;
    MSSession * _session;
    bool  _shouldExpire;
    NSString * _statusText;
    NSString * _summaryText;
    NSDate * _time;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSData *_data;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *breadcrumbText;
@property (nonatomic, copy) NSError *error;
@property (nonatomic) bool isFromMe;
@property (nonatomic, copy) MSMessageLayout *layout;
@property (getter=isPending, nonatomic) bool pending;
@property (nonatomic) bool requiresValidation;
@property (nonatomic, retain) NSString *senderAddress;
@property (nonatomic, retain) NSUUID *senderParticipantIdentifier;
@property (nonatomic, readonly) MSSession *session;
@property (nonatomic) bool shouldExpire;
@property (nonatomic, copy) NSString *statusText;
@property (nonatomic, copy) NSString *summaryText;
@property (nonatomic, retain) NSDate *time;

// Image: /System/Library/Frameworks/Messages.framework/Messages

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_data;
- (void)_mergeSanitizedDataFromMessage:(id)arg1;
- (void)_mergeSanitizedKeepingModifiedMessage:(id)arg1;
- (id)_payloadDataFromAppIconData:(id)arg1 appName:(id)arg2 adamID:(id)arg3 allowDataPayloads:(bool)arg4;
- (id)_pluginPayloadWithAppIconData:(id)arg1 appName:(id)arg2 adamID:(id)arg3 allowDataPayloads:(bool)arg4;
- (id)_pluginPayloadWithAppIconData:(id)arg1 appName:(id)arg2 allowDataPayloads:(bool)arg3;
- (void)_sanitize;
- (id)_sanitizedCopy;
- (id)_shallowCopy;
- (id)accessibilityLabel;
- (id)breadcrumbText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFromMe;
- (bool)isPending;
- (id)layout;
- (bool)requiresValidation;
- (id)senderAddress;
- (id)senderParticipantIdentifier;
- (id)session;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setBreadcrumbText:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setPending:(bool)arg1;
- (void)setRequiresValidation:(bool)arg1;
- (void)setSenderAddress:(id)arg1;
- (void)setSenderParticipantIdentifier:(id)arg1;
- (void)setShouldExpire:(bool)arg1;
- (void)setStatusText:(id)arg1;
- (void)setSummaryText:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setURL:(id)arg1;
- (void)set_data:(id)arg1;
- (bool)shouldExpire;
- (id)statusText;
- (id)summaryText;
- (id)time;

// Image: /System/Library/PrivateFrameworks/FindMyUICore.framework/FindMyUICore

+ (id)findMyLocationRequestMessage;
+ (id)findMyLocationShareMessageWithDuration:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)acceptedFriendInviteMessageWithUrl:(id)arg1 session:(id)arg2;
+ (id)friendInviteMessageWithUrl:(id)arg1 session:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)enterValueRequest;
- (id)enterValueResponse;
- (id)remotePassAction;
- (id)request;
- (id)response;
- (id)selectItemRequest;
- (id)selectItemResponse;
- (void)updateDataURLForRemoteAction:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)peerPaymentMessage;

@end
