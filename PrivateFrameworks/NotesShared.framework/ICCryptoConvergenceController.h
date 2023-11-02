
@interface ICCryptoConvergenceController : NSObject {
    NSProgress * _progress;
    NSManagedObjectContext * _workerContext;
}

@property (retain) NSProgress *progress;
@property (nonatomic, readonly) NSManagedObjectContext *workerContext;

+ (void)setSharedController:(id)arg1;
+ (id)sharedController;

- (void).cxx_destruct;
- (void)authenticationStateDidDeauthenticate:(id)arg1;
- (void)cancelAndWaitWithReason:(id)arg1;
- (bool)convergeNoteWithID:(id)arg1 notePassphrase:(id)arg2;
- (bool)convergeNotesInAccountWithID:(id)arg1 configuration:(id)arg2 progress:(id)arg3;
- (id)initWithWorkerContext:(id)arg1;
- (id)progress;
- (void)setProgress:(id)arg1;
- (bool)unsafelyConvergeAttachmentsForNote:(id)arg1 notePassphrase:(id)arg2 noteMainKey:(id)arg3;
- (bool)unsafelyConvergeNote:(id)arg1 configuration:(id)arg2;
- (bool)unsafelyConvergeNotesInAccount:(id)arg1 configuration:(id)arg2;
- (id)workerContext;

@end
