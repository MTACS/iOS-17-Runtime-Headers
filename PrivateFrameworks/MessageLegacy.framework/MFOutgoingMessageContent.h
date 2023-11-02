
@interface MFOutgoingMessageContent : NSObject {
    MFMutableMessageHeaders * _headers;
    NSArray * _placeholders;
}

@property (nonatomic, retain) MFMutableMessageHeaders *headers;
@property (nonatomic, readonly) MFOutgoingLibraryMessageContent *libraryContent;
@property (nonatomic, readonly) MFOutgoingMultipartRelatedContent *multipartContent;
@property (nonatomic, retain) NSArray *placeholders;
@property (nonatomic, readonly) MFOutgoingRichtextMessageContent *richtextContent;

- (void).cxx_destruct;
- (id)copy;
- (id)headers;
- (id)libraryContent;
- (id)multipartContent;
- (id)placeholders;
- (id)richtextContent;
- (void)setHeaders:(id)arg1;
- (void)setPlaceholders:(id)arg1;

@end
