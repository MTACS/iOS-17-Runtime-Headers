
@interface OBLinkableTemplateLabel : OBTemplateLabel {
    NSURL * _destinationLink;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic, retain) NSURL *destinationLink;
@property (nonatomic, retain) UITapGestureRecognizer *tapRecognizer;

- (void).cxx_destruct;
- (void)_linkTapped:(id)arg1;
- (id)destinationLink;
- (id)init;
- (void)setDestinationLink:(id)arg1;
- (void)setLearnMoreURL:(id)arg1;
- (void)setTapRecognizer:(id)arg1;
- (id)tapRecognizer;

@end
