
@interface CKTUConversationViewUtilities : NSObject

+ (id)activityAppNameForTUConversation:(id)arg1;
+ (id)activityBundleIdentifierForTUConversation:(id)arg1;
+ (id)activityDescriptionStringForTUConversation:(id)arg1;
+ (bool)activityHasImageForTUConversation:(id)arg1;
+ (id)activityIconForTUConversation:(id)arg1 iconSize:(double)arg2;
+ (id)activityImageForTUConversation:(id)arg1;
+ (id)activityTextForTUConversation:(id)arg1;
+ (id)activityTitleForTUConversation:(id)arg1;
+ (unsigned long long)ckTUConversationStateForTUConversation:(id)arg1;
+ (id)faceTimeIconForTUConversation:(id)arg1;
+ (struct CGSize { double x1; double x2; })faceTimeIconSize;
+ (void)formatLPImageForScreenShare:(id)arg1 conversation:(id)arg2;
+ (id)joinStateStatusStringForTUConversation:(id)arg1;
+ (id)sharePlayIcon;
+ (id)titleForAVMode:(unsigned long long)arg1;

@end
