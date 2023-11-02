
@interface NSPersistentHTTPCookie2Storage : NSObject <NSInternalHTTPCookie2Storage> {
    NSURL * _path;
    struct sqlite3_stmt { } * deleteAllCookiesStmt;
    struct sqlite3_stmt { } * deleteCookiesStmt;
    struct sqlite3_stmt { } * insertCookiesStmt;
    struct sqlite3 { } * persistentDb;
    struct sqlite3_stmt { } * selectAllCookiesStmt;
    struct sqlite3_stmt { } * selectDomainCookiesStmt;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSURL *path;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginTransaction;
- (void)commitTransaction;
- (void)deleteAllCookies;
- (void)deleteCookie:(id)arg1;
- (void)deleteCookies:(id)arg1;
- (void)deleteCookiesWithFilter:(id)arg1;
- (id)getAllCookies;
- (id)getCookiesWithFilter:(id)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)path;
- (void)setCookie:(id)arg1;
- (void)setCookies:(id)arg1;
- (void)setPath:(id)arg1;

@end
