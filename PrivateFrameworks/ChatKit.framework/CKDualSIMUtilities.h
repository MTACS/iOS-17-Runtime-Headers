
@interface CKDualSIMUtilities : NSObject {
    NSDictionary * _conversationListSIMLabelImagesDictionary;
}

@property (nonatomic, retain) NSDictionary *conversationListSIMLabelImagesDictionary;

+ (id)_imageForLastUsedSIMForConversation:(id)arg1;
+ (id)_textAttachmentForLastUsedSIMForConversation:(id)arg1;
+ (id)makeSummaryAttributedStringWithSIMImageUsingAttributedString:(id)arg1 forConversation:(id)arg2;
+ (id)sharedUtilities;

- (void).cxx_destruct;
- (id)_conversationListSIMLabelImageForSIMID:(id)arg1;
- (id)_conversationListSIMLabels;
- (void)_createConversationListSIMLabelImagesDictionary;
- (void)_handleSIMSubscriptionsUpdate:(id)arg1;
- (void)_resizeSIMLabel:(id)arg1;
- (id)conversationListSIMLabelImagesDictionary;
- (id)init;
- (void)prewarmConversationListSIMLabelImagesDictionary;
- (void)setConversationListSIMLabelImagesDictionary:(id)arg1;
- (void)updateConversationListSIMLabelImagesDictionary;

@end
