
@interface UploadRecord : NSObject {
    NSString * _applicationIdentifier;
    NSDate * _dateCreated;
    NSDate * _dateLastProcessed;
    NSDate * _dateUploaded;
    NSData * _payload;
    unsigned long long  _processedAttempts;
    unsigned long long  _size;
    NSString * _timestampReferenceIdentifier;
    NSString * _uploadIdentifier;
    int  _uploadStatus;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSDate *dateLastProcessed;
@property (nonatomic, copy) NSDate *dateUploaded;
@property (nonatomic, copy) NSData *payload;
@property (nonatomic) unsigned long long processedAttempts;
@property (nonatomic) unsigned long long size;
@property (nonatomic, copy) NSString *timestampReferenceIdentifier;
@property (nonatomic, copy) NSString *uploadIdentifier;
@property (nonatomic) int uploadStatus;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)dateCreated;
- (id)dateLastProcessed;
- (id)dateUploaded;
- (id)outcomeTelemetryDictionary;
- (id)payload;
- (unsigned long long)processedAttempts;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setDateLastProcessed:(id)arg1;
- (void)setDateUploaded:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setProcessedAttempts:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setTimestampReferenceIdentifier:(id)arg1;
- (void)setUploadIdentifier:(id)arg1;
- (void)setUploadStatus:(int)arg1;
- (unsigned long long)size;
- (id)timestampReferenceIdentifier;
- (id)uploadIdentifier;
- (int)uploadStatus;

@end
