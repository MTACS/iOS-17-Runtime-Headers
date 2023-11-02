
@interface SRSmartRepliesContactCaptionProvider : NSObject

+ (id)newestSuggestedContactForDestinationID:(id)arg1;
+ (id)sharedService;
+ (void)suggestedNamesForDestinationID:(id)arg1 onlySignificant:(bool)arg2 withCompletion:(id /* block */)arg3;

@end
