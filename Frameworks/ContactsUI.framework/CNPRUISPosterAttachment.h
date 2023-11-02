
@interface CNPRUISPosterAttachment : NSObject {
    PRUISPosterAttachment * _attachment;
}

@property (nonatomic, readonly) PRUISPosterAttachment *attachment;

- (void).cxx_destruct;
- (id)attachment;
- (id)initWithAttachment:(id)arg1;

@end
