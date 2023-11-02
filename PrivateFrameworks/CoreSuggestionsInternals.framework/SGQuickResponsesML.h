
@interface SGQuickResponsesML : NSObject {
    <PMLTrainingProtocol> * _localTraining;
}

+ (bool)_isImageAttachment:(id)arg1;
+ (bool)_isSharingSenderLocation:(id)arg1 senderName:(id)arg2;

- (void).cxx_destruct;
- (id)_dynamicLabelContentForReply:(id)arg1 prompt:(id)arg2 language:(id)arg3;
- (id)init;
- (id)initWithTraining:(id)arg1;
- (void)trainQuickResponsesForMessage:(id)arg1 withConversationHistory:(id)arg2;

@end
