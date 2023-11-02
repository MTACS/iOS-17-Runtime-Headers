
@interface MFMimeBody : MFMessageBody <ECMimeBody> {
    long long  _encryptedDescendantState;
    bool  _isEncrypted;
    unsigned int  _numAlternatives;
    unsigned int  _preferredAlternative;
    NSArray * _signers;
    MFMimePart * _topLevelPart;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasEncryptedDescendantPart;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEncrypted;
@property (nonatomic, readonly, copy) NSString *mimeSubtype;
@property (nonatomic, readonly, copy) NSString *mimeType;
@property (nonatomic, retain) NSArray *signers;
@property (readonly) Class superclass;
@property (nonatomic, retain) MFMimePart *topLevelPart;
@property (nonatomic, readonly) unsigned long long totalTextSize;

+ (id)copyNewMimeBoundary;
+ (id)versionString;

- (void).cxx_destruct;
- (id)attachmentURLs;
- (id)attachments;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(bool)arg3 isComplete:(bool*)arg4;
- (bool)hasEncryptedDescendantPart;
- (id)init;
- (bool)isEncrypted;
- (bool)isHTML;
- (bool)isRich;
- (id)mimeSubtype;
- (id)mimeType;
- (long long)numberOfAlternatives;
- (unsigned int)numberOfAttachmentsSigned:(bool*)arg1 encrypted:(bool*)arg2;
- (id)partWithNumber:(id)arg1;
- (long long)preferredAlternative;
- (id)preferredBodyPart;
- (void)setIsEncrypted:(bool)arg1;
- (void)setPreferredAlternative:(long long)arg1;
- (void)setSigners:(id)arg1;
- (void)setTopLevelPart:(id)arg1;
- (id)signers;
- (id)textHtmlPart;
- (id)topLevelPart;
- (unsigned long long)totalTextSize;

@end
