
@interface CKMentionsUtilities : NSObject

+ (id)attributedStringByHighlightingMentionsInAttributedString:(id)arg1 withFont:(id)arg2 textColor:(id)arg3 mentionFont:(id)arg4 mentionColor:(id)arg5;
+ (bool)metionedHandleMatchesMeCard:(id)arg1;
+ (bool)supportsSupplementalLexiconMentions;

@end
