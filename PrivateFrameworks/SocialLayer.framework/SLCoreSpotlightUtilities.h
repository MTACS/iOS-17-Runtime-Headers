
@interface SLCoreSpotlightUtilities : NSObject

+ (id)CSQueryStringForAutodonatingChatsWithDecay:(bool)arg1;
+ (id)CSQueryStringForSLHighlightsForContentType:(unsigned char)arg1 forChatIdentifiers:(id)arg2;
+ (id)CSSearchQueryContextForAutodonatingChats;
+ (id)CSSearchQueryContextForSLHighlightsForContentType:(unsigned char)arg1;
+ (id)fetchCSSearchableItemForUniqueIdentifier:(id)arg1 forContentType:(unsigned char)arg2 withRequiredAttributes:(id)arg3 error:(id*)arg4;
+ (id)requiredSpotlightAttributeKeysForFiles;
+ (id)requiredSpotlightAttributeKeysForLinks;

@end
