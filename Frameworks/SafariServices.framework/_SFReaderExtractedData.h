
@interface _SFReaderExtractedData : NSObject <NSCopying, NSSecureCoding> {
    NSString * _author;
    NSData * _body;
    NSURL * _mainImageURL;
    NSString * _publishedDate;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSString *author;
@property (nonatomic, readonly) NSData *body;
@property (nonatomic, readonly) NSURL *mainImageURL;
@property (nonatomic, readonly, copy) NSString *publishedDate;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAuthor:(id)arg1 body:(id)arg2 publishedDate:(id)arg3 title:(id)arg4 mainImageURL:(id)arg5 url:(id)arg6;
- (id)author;
- (id)body;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReaderContent:(id)arg1 url:(id)arg2;
- (id)mainImageURL;
- (id)publishedDate;
- (id)title;
- (id)url;

@end
