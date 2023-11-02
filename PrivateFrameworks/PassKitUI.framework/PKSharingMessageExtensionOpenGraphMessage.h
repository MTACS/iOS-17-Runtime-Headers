
@interface PKSharingMessageExtensionOpenGraphMessage : NSObject <PKSharingMessageExtensionMessage> {
    bool  _hasFetchedOpenGraphPreview;
    bool  _isFromMe;
    bool  _isPending;
    NSString * _subtitle;
    UIImage * _thumbnail;
    NSString * _title;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasFetchedOpenGraphPreview;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFromMe;
@property (nonatomic) bool isPending;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *thumbnail;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)description;
- (bool)hasFetchedOpenGraphPreview;
- (id)init;
- (id)initWithURL:(id)arg1;
- (bool)isFromMe;
- (bool)isPending;
- (void)setHasFetchedOpenGraphPreview:(bool)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setIsPending:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)thumbnail;
- (id)title;
- (id)urlRepresentation;

@end
