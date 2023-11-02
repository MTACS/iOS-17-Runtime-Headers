
@interface ConversationKit.CallParticipantLabelDescriptor : NSObject <CNKCallParticipantLabelDescriptorProtocol> {
    void isDynamic;
    void layoutState;
    void localizedSenderIdentity;
    void secondaryString;
    void strings;
}

@property (nonatomic) bool isDynamic;
@property (nonatomic) long long layoutState;
@property (nonatomic, copy) NSString *localizedSenderIdentity;
@property (nonatomic, copy) NSString *secondaryString;
@property (nonatomic, copy) NSArray *strings;

- (void).cxx_destruct;
- (id)init;
- (bool)isDynamic;
- (long long)layoutState;
- (id)localizedSenderIdentity;
- (id)secondaryString;
- (void)setIsDynamic:(bool)arg1;
- (void)setLayoutState:(long long)arg1;
- (void)setLocalizedSenderIdentity:(id)arg1;
- (void)setSecondaryString:(id)arg1;
- (void)setStrings:(id)arg1;
- (id)strings;

@end
