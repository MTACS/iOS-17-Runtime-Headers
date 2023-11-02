
@interface MFDAMailbox : MFMailboxUid {
    NSString * _folderID;
}

@property (copy) NSString *folderID;

- (void).cxx_destruct;
- (id)URLWithAccount:(id)arg1;
- (id)_folderID;
- (id)_privacySafeDescription;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)folderID;
- (id)initWithName:(id)arg1 attributes:(unsigned long long)arg2 account:(id)arg3 folderID:(id)arg4;
- (bool)mergeWithUserInfo:(id)arg1;
- (void)setFolderID:(id)arg1;

@end
