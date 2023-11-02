
@interface _NSAttributedStringIntentResolver : NSObject <_NSAttributedStringIntentResolution>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_replaceInlinePresentationIntent:(id)arg1 get:(id /* block */)arg2 set:(id /* block */)arg3;
+ (void)_replaceInlinePresentationIntentInString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 value:(id)arg3;
+ (id)attributedStringByResolvingString:(id)arg1;
+ (id)attributesByResolvingIntentsInAttributes:(id)arg1;
+ (id)fontAttributeValueForInlineIntent:(long long)arg1 suggestedBaseFont:(id)arg2 suggestingTheDefaultFont:(bool)arg3;
+ (id)fontAttributeValueForInlinePresentationIntent:(unsigned long long)arg1 suggestedBaseFont:(id)arg2 suggestingTheDefaultFont:(bool)arg3;
+ (void)resolveAttributedString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
