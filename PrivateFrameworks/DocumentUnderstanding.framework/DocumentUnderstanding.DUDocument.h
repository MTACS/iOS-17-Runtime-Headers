
@interface DocumentUnderstanding.DUDocument : NSObject <NSCoding, NSCopying> {
    void rawDocument;
}

@property (nonatomic, readonly) NSString *abstract;
@property (nonatomic, readonly) NSString *comment;
@property (nonatomic, readonly) NSString *creator;
@property (nonatomic, readonly) NSDate *dateCreated;
@property (nonatomic, readonly) NSDate *dateModified;
@property (nonatomic, readonly) _TtC21DocumentUnderstanding18DUDocumentHTMLData *documentHTMLData;
@property (nonatomic, readonly) _TtC21DocumentUnderstanding21DUDocumentMessageData *documentMessageData;
@property (nonatomic, readonly) NSArray *documentUIElements;
@property (nonatomic, readonly) NSString *headline;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *inLanguage;
@property (nonatomic, readonly) NSArray *keywords;
@property (nonatomic, readonly) NSURL *significantLink;
@property (nonatomic, readonly) NSString *subHeadline;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSURL *thumbnailUrl;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *version;

- (void).cxx_destruct;
- (id)abstract;
- (id)comment;
- (id)copyWithZone:(void*)arg1;
- (id)creator;
- (id)dateCreated;
- (id)dateModified;
- (id)documentHTMLData;
- (id)documentMessageData;
- (id)documentUIElements;
- (void)encodeWithCoder:(id)arg1;
- (id)headline;
- (id)identifier;
- (id)inLanguage;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRawDocument:(id)arg1 maxLength:(long long)arg2;
- (id)initWithText:(id)arg1 maxLength:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)keywords;
- (id)rawCopy;
- (id)significantLink;
- (id)subHeadline;
- (id)text;
- (id)thumbnailUrl;
- (id)url;
- (id)version;

@end
