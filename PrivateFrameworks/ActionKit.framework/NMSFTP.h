
@interface NMSFTP : NSObject {
    bool  _connected;
    NMSSHSession * _session;
    struct _LIBSSH2_SFTP { } * _sftpSession;
}

@property (getter=isConnected, nonatomic) bool connected;
@property (nonatomic, retain) NMSSHSession *session;
@property (nonatomic) struct _LIBSSH2_SFTP { }*sftpSession;

+ (id)connectWithSession:(id)arg1;

- (void).cxx_destruct;
- (bool)appendContents:(id)arg1 toFileAtPath:(id)arg2;
- (bool)appendStream:(id)arg1 toFileAtPath:(id)arg2;
- (bool)connect;
- (id)contentsAtPath:(id)arg1;
- (id)contentsAtPath:(id)arg1 progress:(id /* block */)arg2;
- (id)contentsOfDirectoryAtPath:(id)arg1;
- (bool)copyContentsOfPath:(id)arg1 toFileAtPath:(id)arg2 progress:(id /* block */)arg3;
- (bool)createDirectoryAtPath:(id)arg1;
- (bool)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2;
- (bool)directoryExistsAtPath:(id)arg1;
- (void)disconnect;
- (bool)fileExistsAtPath:(id)arg1;
- (id)infoForFileAtPath:(id)arg1;
- (id)initWithSession:(id)arg1;
- (bool)isConnected;
- (bool)moveItemAtPath:(id)arg1 toPath:(id)arg2;
- (struct _LIBSSH2_SFTP_HANDLE { }*)openDirectoryAtPath:(id)arg1;
- (struct _LIBSSH2_SFTP_HANDLE { }*)openFileAtPath:(id)arg1 flags:(unsigned long long)arg2 mode:(long long)arg3;
- (bool)removeDirectoryAtPath:(id)arg1;
- (bool)removeFileAtPath:(id)arg1;
- (id)session;
- (void)setConnected:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setSftpSession:(struct _LIBSSH2_SFTP { }*)arg1;
- (struct _LIBSSH2_SFTP { }*)sftpSession;
- (bool)writeContents:(id)arg1 toFileAtPath:(id)arg2;
- (bool)writeContents:(id)arg1 toFileAtPath:(id)arg2 progress:(id /* block */)arg3;
- (bool)writeFileAtPath:(id)arg1 toFileAtPath:(id)arg2;
- (bool)writeFileAtPath:(id)arg1 toFileAtPath:(id)arg2 progress:(id /* block */)arg3;
- (bool)writeStream:(id)arg1 toFileAtPath:(id)arg2;
- (bool)writeStream:(id)arg1 toFileAtPath:(id)arg2 progress:(id /* block */)arg3;
- (bool)writeStream:(id)arg1 toSFTPHandle:(struct _LIBSSH2_SFTP_HANDLE { }*)arg2;
- (bool)writeStream:(id)arg1 toSFTPHandle:(struct _LIBSSH2_SFTP_HANDLE { }*)arg2 progress:(id /* block */)arg3;

@end
