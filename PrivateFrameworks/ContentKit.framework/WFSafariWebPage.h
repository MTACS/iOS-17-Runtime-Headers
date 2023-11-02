
@interface WFSafariWebPage : NSObject <NSCopying, NSSecureCoding, WFNaming> {
    NSURL * _URL;
    NSData * _documentHTML;
    NSString * _pageTitle;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly, copy) NSData *documentHTML;
@property (nonatomic, readonly, copy) NSString *pageTitle;
@property (nonatomic, readonly, copy) NSData *selectionHTML;
@property (nonatomic, readonly, copy) NSString *selectionText;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)documentHTML;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 documentHTML:(id)arg3;
- (id)pageTitle;
- (id)selectionHTML;
- (id)selectionText;
- (id)wfName;

@end
