
@interface ENTextMessageManager : NSObject {
    NSObject<ENTextMessageManagerDelegate> * _delegate;
    NSMutableDictionary * _textMessageHashes;
    ENSecureArchiveFileWrapper * _textMessageHistoryFileWrapper;
}

@property (nonatomic) NSObject<ENTextMessageManagerDelegate> *delegate;
@property (nonatomic, retain) NSMutableDictionary *textMessageHashes;
@property (nonatomic, retain) ENSecureArchiveFileWrapper *textMessageHistoryFileWrapper;

- (void).cxx_destruct;
- (void)_purgeOldHashes;
- (bool)_readIfNecessaryWithError:(id*)arg1;
- (bool)_verifyTextMessage:(id)arg1 phoneNumber:(id)arg2 verificationDate:(id)arg3 publicKey:(id)arg4 publicKeyVersion:(id)arg5 reportType:(id)arg6 outError:(id*)arg7;
- (void)activateIfNeeded;
- (id)delegate;
- (id)initWithDirectoryURL:(id)arg1;
- (void)invalidate;
- (void)purgeAllHashes;
- (void)purgeOldHashes;
- (void)setDelegate:(id)arg1;
- (void)setTextMessageHashes:(id)arg1;
- (void)setTextMessageHistoryFileWrapper:(id)arg1;
- (id)textMessageHashes;
- (id)textMessageHistoryFileWrapper;
- (bool)verifyTextMessage:(id)arg1 phoneNumber:(id)arg2 verificationDate:(id)arg3 publicKey:(id)arg4 publicKeyVersion:(id)arg5 userReport:(bool*)arg6 outError:(id*)arg7;

@end
