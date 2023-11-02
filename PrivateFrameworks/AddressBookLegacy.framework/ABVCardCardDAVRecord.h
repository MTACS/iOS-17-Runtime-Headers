
@interface ABVCardCardDAVRecord : ABVCardRecord

+ (bool)includeABClipRectInVCardPhotos;
+ (bool)includeAddressingGrammarInVCards;
+ (bool)includeImageURIInVCards;
+ (bool)includeNotesInVCards;
+ (bool)includeREVInVCards;

- (bool)useThumbnailImageFormatIfAvailable;

@end
