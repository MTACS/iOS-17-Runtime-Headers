
@interface CKCalendarMediaObject : CKCardMediaObject

+ (id)UTITypes;
+ (id)fallbackFilenamePrefix;

- (id)attachmentSummary:(unsigned long long)arg1;
- (int)mediaType;
- (bool)shouldBeQuickLooked;
- (id)subtitle;

@end
