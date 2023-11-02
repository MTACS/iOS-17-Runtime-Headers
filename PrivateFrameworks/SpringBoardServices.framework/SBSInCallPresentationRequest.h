
@interface SBSInCallPresentationRequest : NSObject

+ (id)identifiersForRequestedPresentations;
+ (void)notePresentationEndForRequestWithIdentifier:(id)arg1;
+ (void)performPresentationWithConfiguration:(id)arg1 completion:(id /* block */)arg2;

@end
