
@interface CUIKEventDescriptionGenerator : CUIKDescriptionGenerator

+ (id)sharedGenerator;

- (id)_attributedStringWithURL:(id)arg1 title:(id)arg2;
- (id)_basicTextAttributes;
- (id)_boldBasicTextAttributes;
- (id)_htmlStringWithURL:(id)arg1 title:(id)arg2;
- (id)_showEventURLStringForEvent:(id)arg1;
- (id)_textRepresentationForAttendee:(id)arg1 includeEmailAddress:(bool)arg2;
- (id)_urlAttributes:(id)arg1;
- (id)_virtualConferenceHTMLRepresentation:(id)arg1 isForEmail:(bool)arg2;
- (bool)_virtualConferenceUsesShortRepresentation:(id)arg1;
- (id)dateStringRepresentationForEvent:(id)arg1;
- (id)textRepresentationForEvent:(id)arg1 withTextFormat:(int)arg2 showURI:(bool)arg3;
- (id)virtualConferenceEmailHTMLRepresentation:(id)arg1;

@end
