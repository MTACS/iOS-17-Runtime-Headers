
@interface _BMRegistrarRegistration : NSObject {
    NSString * _bundleID;
    NSURL * _databaseURL;
    NSDate * _lastCommunicationDate;
    NSDate * _registrationDate;
    NSString * _sourceStreamID;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSURL *databaseURL;
@property (nonatomic, retain) NSDate *lastCommunicationDate;
@property (nonatomic, retain) NSDate *registrationDate;
@property (nonatomic, retain) NSString *sourceStreamID;

- (void).cxx_destruct;
- (id)bundleID;
- (id)databaseURL;
- (id)lastCommunicationDate;
- (id)registrationDate;
- (void)setBundleID:(id)arg1;
- (void)setDatabaseURL:(id)arg1;
- (void)setLastCommunicationDate:(id)arg1;
- (void)setRegistrationDate:(id)arg1;
- (void)setSourceStreamID:(id)arg1;
- (id)sourceStreamID;

@end
