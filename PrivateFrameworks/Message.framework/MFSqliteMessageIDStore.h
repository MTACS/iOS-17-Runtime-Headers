
@interface MFSqliteMessageIDStore : NSObject {
    MFMailMessageLibrary * _library;
    long long  _mailboxRowid;
    NSString * _url;
}

- (void).cxx_destruct;
- (void)_loadMailboxRowidIfNecessary:(id)arg1;
- (void)deleteAllUIDs;
- (void)deleteUIDsNotInArray:(id)arg1;
- (unsigned long long)flagsForUID:(id)arg1;
- (id)initWithLibrary:(id)arg1 URLString:(id)arg2;
- (id)knownMessageIDsFromSet:(id)arg1;
- (id)messageIDsAddedBeforeDate:(double)arg1;
- (unsigned int)numberOfMessageIDs;

@end
