
@interface ICTableLinkPresentationActivityItemSource : ICLinkPresentationActivityItemSource {
    ICAttachment * _attachment;
}

@property (retain) ICAttachment *attachment;

- (void).cxx_destruct;
- (id)attachment;
- (id)detail;
- (id)init;
- (id)initWithAttachment:(id)arg1;
- (void)setAttachment:(id)arg1;
- (id)title;

@end
