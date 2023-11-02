
@interface ICSystemPaperDocumentController : NSObject {
    void presenters;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addPresenter:(id)arg1;
- (id)init;
- (id)presenterForPaperIdentifier:(id)arg1;
- (void)removePresenter:(id)arg1;

@end
