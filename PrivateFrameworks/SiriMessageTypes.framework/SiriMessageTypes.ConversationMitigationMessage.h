
@interface SiriMessageTypes.ConversationMitigationMessage : SiriMessageTypes.RequestMessageBase {
    void isMitigated;
}

@property (nonatomic, readonly) NSString *description;

- (id)description;

@end
