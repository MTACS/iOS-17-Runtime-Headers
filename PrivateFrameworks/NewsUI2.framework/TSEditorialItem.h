
@interface TSEditorialItem : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  actionURL;
    void attributes;
    void backingTag;
    void headline;
    void identifier;
    void subtitle;
    void subtitleColor;
    void thumbnailImage;
    void title;
}

@property (nonatomic, copy) NSURL *actionURL;
@property (nonatomic, copy) NSArray *attributes;
@property (nonatomic, retain) <FCTagProviding> *backingTag;
@property (nonatomic, retain) <FCHeadlineProviding> *headline;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *subtitleColor;
@property (nonatomic, retain) UIImage *thumbnailImage;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)actionURL;
- (id)attributes;
- (id)backingTag;
- (id)headline;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 subtitleColor:(id)arg4 attributes:(id)arg5 actionURL:(id)arg6 thumbnailImage:(id)arg7 backingTag:(id)arg8 headline:(id)arg9;
- (void)setActionURL:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setBackingTag:(id)arg1;
- (void)setHeadline:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleColor:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)subtitleColor;
- (id)thumbnailImage;
- (id)title;

@end
