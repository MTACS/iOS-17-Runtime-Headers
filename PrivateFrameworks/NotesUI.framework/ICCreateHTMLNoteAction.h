
@interface ICCreateHTMLNoteAction : NSObject <ICCreateNoteAction> {
    <ICLegacyContext> * _context;
    <ICLegacyFolder> * _folder;
}

@property (nonatomic, readonly) <ICLegacyContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <ICLegacyFolder> *folder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id)folder;
- (id)initWithHTMLNoteContext:(id)arg1 folder:(id)arg2;
- (id)performWithTitle:(id)arg1 contents:(id)arg2 error:(id*)arg3;

@end
