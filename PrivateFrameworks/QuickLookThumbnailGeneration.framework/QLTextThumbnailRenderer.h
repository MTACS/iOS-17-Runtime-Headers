
@interface QLTextThumbnailRenderer : NSObject

+ (id)_readingOptionsFromContentType:(id)arg1 encoding:(unsigned int)arg2;
+ (id)mutableAttributedStringForThumbnailWithData:(id)arg1 contentType:(id)arg2 encoding:(unsigned int)arg3 documentAttributes:(id*)arg4;
+ (id)mutableAttributedStringForThumbnailWithURL:(id)arg1 documentAttributes:(id*)arg2;
+ (id)textDocumentTypeFromContentType:(id)arg1;

@end
