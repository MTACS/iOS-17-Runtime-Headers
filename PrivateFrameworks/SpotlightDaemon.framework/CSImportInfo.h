
@interface CSImportInfo : NSObject {
    NSString * _contentType;
    NSURL * _contentURL;
    NSString * _externalID;
    NSString * _sandboxExtension;
}

@property (nonatomic, retain) NSString *contentType;
@property (nonatomic, retain) NSURL *contentURL;
@property (nonatomic, retain) NSString *externalID;
@property (nonatomic, retain) NSString *sandboxExtension;

- (void).cxx_destruct;
- (id)contentType;
- (id)contentURL;
- (id)externalID;
- (id)sandboxExtension;
- (void)setContentType:(id)arg1;
- (void)setContentURL:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setSandboxExtension:(id)arg1;

@end
