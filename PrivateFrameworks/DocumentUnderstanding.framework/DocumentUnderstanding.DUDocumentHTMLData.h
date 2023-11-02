
@interface DocumentUnderstanding.DUDocumentHTMLData : NSObject <NSCoding, NSCopying> {
    void documentEmailData;
    void htmlString;
}

@property (nonatomic, retain) _TtC21DocumentUnderstanding19DUDocumentEmailData *documentEmailData;
@property (nonatomic, copy) NSString *htmlString;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (id)documentEmailData;
- (void)encodeWithCoder:(id)arg1;
- (id)htmlString;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDocumentEmailData:(id)arg1;
- (void)setHtmlString:(id)arg1;

@end
